# DSA Foundation — Pro-Level Notes for Codeforces & ICPC

A single reference for data structures and algorithms, ordered for competitive programming. Use this as your solid base before and during contest prep.

**Target:** Codeforces-focused preparation; ICPC/Codechef context included.

---

## Table of contents

1. [Setup and complexity](#1-setup-and-complexity)
2. [C++ for competitive programming](#2-c-for-competitive-programming)
3. [Math for CP](#3-math-for-cp)
4. [Recursion and arrays](#4-recursion-and-arrays)
5. [Linear data structures](#5-linear-data-structures)
6. [Graphs](#6-graphs)
7. [Algorithms and paradigms](#7-algorithms-and-paradigms)
8. [Contest strategy and debugging](#8-contest-strategy-and-debugging)
9. [Appendix: OOP (optional)](#appendix-oop-optional)
10. [Code references](#code-references)

---

## 1. Setup and complexity

### Build and run (Linux/WSL)

- **Build:** `g++ filename.cpp` produces `a.out`, or name the executable: `g++ -o 01 01.cpp`
- **Run:** `./01` (or `./a.out`). On Windows-style paths you may see `.\a.exe`.
- Use **conditionals** to make the code robust (validate input, handle edge cases before running main logic).

### Time and space complexity (Big-O)

- **Why it matters:** Judges run your code under strict time (e.g. 1–2 seconds) and memory limits. You must know roughly how many “simple” operations your solution does.
- **Big-O** describes worst-case growth: O(1), O(log n), O(n), O(n log n), O(n²), O(2^n), etc.
- **Rule of thumb:** Aim for **about ≤ 10^8 simple operations per second** when estimating. For example:
  - n ≈ 10^5 → O(n) or O(n log n) is usually OK; O(n²) is not.
  - n ≈ 10^3 → O(n²) can be acceptable.
- **Takeaway:** Before coding, check the constraints (max n, max value) and choose an algorithm whose complexity fits this rule.

---

## 2. C++ for competitive programming

### I/O and basic language

- **Input:** Bytes from device (keyboard, file, network) into main memory = *input operation*. `cin` is a predefined object of the `istream` class, tied to the standard input (usually keyboard).
- **Output:** Bytes from main memory to device (screen, printer, network) = *output operation*.
- **Namespace:** Used to avoid name clashes when the same name would be used for variables, functions, or classes in one scope. (`std::`, or `using namespace std;` in CP for brevity.)

### Data types

- Data types tell the variable what kind of data it can hold. The compiler allocates memory based on the type; each type needs a different amount.
- **Fundamental:** `int`, `char`, `bool`, `float`, `double`, `void`, `wchar_t`.
- **Derived:** function, array, pointer, reference.
- **User-defined:** struct, class, union, enum.
- **For CP:** Prefer `long long` when numbers can exceed ~2×10^9 to avoid overflow; be aware of **integer overflow** in expressions (multiplication, addition). Use `1LL * a * b` when needed.

### Struct and union

**Structure:** User-defined type that groups variables (members/fields) of different types under one name.

- **Declaration:** Describes the layout; no memory is allocated. Use `struct Name { ... };`.
- **Definition:** Where you create a variable of that type and assign values to members.
- **Access:** Use the dot operator: `v.member`.

**Union:** At any time only one member holds a value; all members share the same memory.

```cpp
union Data {
    int i;
    float f;
    char c;
};
Data d;
d.i = 10;   // d.i holds 10
d.f = 3.14; // d.f holds 3.14; d.i is overwritten
```

Use **struct** for graph edges, pairs of values, or custom nodes; union is niche in CP.

### STL (Standard Template Library)

- **What it is:** A set of C++ template classes: **containers** (vector, list, map, set, etc.) and **algorithms** (search, sort). Benefits: reusability, efficiency, readability; implementations are tuned for time/space.
- **Vector:** Dynamic array. Insert/delete at the **back** in O(1); at a random position in O(n). `v.begin()` and `v.end()` are **iterators**, not indices.
- **Map:** Key–value store. `map<K,V>` keeps keys sorted; `unordered_map<K,V>` has O(1) average access but no order. Use `mp[key]` or `mp.find(key)`; iterate with `for (auto& [k,v] : mp)` or iterator.
- **Set:** Sorted unique keys. `set<T>`, `unordered_set<T>`; useful for “exists?” and “unique elements.”
- **Pair:** `pair<int,int>` or `pair<T,U>`. Access with `.first`, `.second`. Used in BFS/DFS (node, distance), sorting by two values, etc.
- **Sort and bounds:** `sort(v.begin(), v.end())`; `lower_bound`, `upper_bound` on sorted sequences for binary-search style lookups. Know the difference: lower_bound = first ≥ x, upper_bound = first > x.

---

## 3. Math for CP

### Number bases

- **Base** = number of unique digits used to represent numbers in that system.
  - Base 2 (binary): digits 0, 1.
  - Base 3: three unique digits; etc.

### Useful functions and notions

- `min(A, B)` — smallest of two values; `max(A, B)` — largest.
- `abs(x)` — absolute value.
- **Integer division and modulo:** `a / b` truncates toward zero; `a % b` is the remainder. For non-negative integers, `0 <= (a % b) < b`. Watch for negative `a` and platform-dependent `%`.
- **GCD:** Euclid’s algorithm: `gcd(a, b) = gcd(b, a % b)`; base case `gcd(a, 0) = a`. Use `__gcd(a,b)` or implement it.
- **Fast exponentiation:** Compute `a^b % mod` in O(log b) by squaring. Essential for big powers in number-theory problems.
- **Floating point:** Use `double` with care; avoid equality checks. Prefer integer logic when possible to prevent precision issues.

---

## 4. Recursion and arrays

### Recursion

- A function that calls itself. You need:
  - **Base case(s):** Stopping condition so the recursion does not run forever.
  - **Recurrence:** How the problem for n (or current state) is expressed in terms of smaller or simpler cases.
- Classic examples: factorial `n! = n * (n-1)!` with base `0! = 1`; Fibonacci `F(n) = F(n-1) + F(n-2)` with base `F(0)=0`, `F(1)=1`. Understanding recursion is the foundation for backtracking and divide-and-conquer.

### Prefix sum

- **Idea:** At index `i`, store the sum of elements from the start of the array up to (and including) `i`.
- **Definition:** `pre[i] = a[0] + a[1] + ... + a[i]`. Often use 1-based indexing: `pre[i] = pre[i-1] + a[i]` with `pre[0] = 0` as base to avoid off-by-one errors.
- **Use:** Range-sum queries: sum from `l` to `r` = `pre[r] - pre[l-1]` in O(1) after O(n) preprocessing. Use a clear base case when building `pre` to keep the code bug-free.
- **Practice:** See [algorithm/crazy/prefix-sum.cpp](algorithm/crazy/prefix-sum.cpp).

---

## 5. Linear data structures

### Singly linked list

- **Structure:** Nodes; each node has a *data* field and a *next* pointer to the next node. The last node’s `next` is `nullptr`. Elements are **not** in contiguous memory.
- **Pros:** No fixed pre-allocation, so less risk of wasting memory; insertion and deletion at a known position can be O(1) with a pointer to the previous node.
- **Cons:** No random access; **reverse traversal is hard** without a “previous” pointer (use doubly linked list or reverse the list if needed).
- **Terms:** **Head** = pointer to the first node (or `NULL` if empty). **Tail** = last node.

### Stack and queue

- **Stack:** LIFO. Operations: push (top), pop (top), top, empty. Use when you need “last in, first out” (e.g. parsing, DFS with explicit stack, monotonic stack).
- **Queue:** FIFO. Operations: push (back), pop (front), front, empty. Use for BFS, level-order, or any “first in, first out” order.
- **Deque:** Double-ended queue — push/pop at both ends. Use when you need sliding-window min/max or BFS on 0–1 graphs.

**Practice:** See [Data-Structure/](Data-Structure/) for linked list, stack, and related code.

---

## 6. Graphs

- **Graph:** Data structure that models relationships between entities. **Vertices (nodes)** are the entities; **edges** are the connections. Directed edges have a direction; undirected edges do not.
- **Directed graph:** Each edge has a direction (e.g. `u → v`).
- **Undirected graph:** Edges have no direction; you can traverse both ways.

### Representation

- **Adjacency list:** For each vertex, store a list (e.g. `vector<int> adj[n]`) of neighbors. Common in CP; good when the graph is sparse.
- **Adjacency matrix:** `adj[u][v] = 1` or weight if there is an edge. O(n²) space; use when you need O(1) “is there an edge?” or dense graphs.

### Traversals and shortest path

- **BFS:** Explore level by level from a source. Use a queue. On an **unweighted** graph, BFS from the source gives **shortest path lengths** (and parents for path reconstruction).
- **DFS:** Go deep, then backtrack. Use recursion or an explicit stack. Use for cycles, connected components, topological order in DAGs.
- **Cycle detection:** Undirected — DFS with “parent” to avoid going back. Directed — DFS with three states (unvisited, in stack, done) or use Kahn’s algorithm on in-degrees.
- **Weighted graphs:** For non-negative weights, Dijkstra’s algorithm gives single-source shortest paths. Learn when to use BFS vs Dijkstra.

---

## 7. Algorithms and paradigms

### Binary search

- **On a sorted array:** Find first/last position of a value, or insertion point. Use `lower_bound` / `upper_bound` or implement with `mid = (lo + hi) / 2` and adjust `lo`/`hi`.
- **Binary search on answer:** When the problem asks “minimum maximum” or “maximum minimum,” often you can binary search on the answer and check with a greedy or linear scan. Complexity is usually O(n log V) or similar.

**Practice:** [algorithm/Binary-Search/](algorithm/Binary-Search/).

### Greedy

- Build the solution step by step, making a locally optimal choice at each step. Correctness often relies on **exchange arguments**: prove that swapping or changing a choice cannot improve the solution.
- Typical uses: intervals (sort by end/start), scheduling, Huffman, many ad-hoc problems.

### Dynamic programming (DP)

- **Idea:** Break the problem into overlapping subproblems; store results to avoid recomputation.
- **Ingredients:** states (what you need to remember), transitions (how one state depends on others), base cases. A 1D example: Fibonacci with `dp[i] = dp[i-1] + dp[i-2]`.
- Use constraints (n, values) to decide state dimensions and whether you need to optimize space (e.g. only last row of a table).

---

## 8. Contest strategy and debugging

### Why this curriculum

- **ACM ICPC** (Association for Computing Machinery – International Collegiate Programming Contest) is a major multi-tiered contest; **Codechef** is one path for Indian teams to reach finals. **Codeforces** is ideal for daily practice and rating. In all of them, **knowing algorithms and data structures is central.**

### Passing tests and fixing bugs

- **“I solved it but tests fail”** usually means: wrong edge cases (n=1, empty input, all same, maximum n), wrong handling of limits (overflow, negative numbers), or off-by-one in indices/loops.
- **Use constraints:** Max n and max value tell you which complexity is acceptable (see [Setup and complexity](#1-setup-and-complexity)) and what types to use (`int` vs `long long`).
- **Debugging:** Add prints to see values at key steps; remove or disable before submit. Check boundary conditions and the first/last iteration of loops.
- **Time management:** Solve the easiest problems first to secure points; then move to harder ones. If you get stuck on one problem, try another and come back.

### Lessons from practice

- After a contest: note which problems were easy vs hard, where you lost time (e.g. one question that blocked you), and why some solutions didn’t pass (wrong logic vs implementation vs edge cases). Practicing “passing all tests” systematically improves consistency.

---

## Appendix: OOP (optional)

Not required for most Codeforces-style problems, but useful for interviews and larger codebases.

- **Virtual function:** Declared with `virtual` in a base class and overridden in derived classes. The actual function called is decided at **runtime** from the object type (runtime polymorphism). **Override** = provide your own implementation in the derived class.
- **Declaration** = name and signature; **definition** = body of the function.
- **Pure virtual function:** Declared with `= 0` and has no definition in the base class. Every concrete derived class must implement it.
- **Abstract class:** Has at least one pure virtual function; you cannot create objects of it. It acts as a blueprint for derived classes.
- **Normal class:** All functions defined; you can create objects.

---

## Code references

Point your implementation practice to these parts of your workspace:

- **[algorithm/Binary-Search/](algorithm/Binary-Search/)** — binary search, lower/upper bound, search-insert position, floor/ceil.
- **[algorithm/crazy/prefix-sum.cpp](algorithm/crazy/prefix-sum.cpp)** — prefix sum.
- **[Data-Structure/](Data-Structure/)** — linked lists (singly, doubly, circular), stack, hash table, sets.

Read a section here, then code or refine the corresponding topic there to build a strong, contest-ready foundation.
