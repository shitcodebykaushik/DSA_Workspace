# Combined Markdown Content

---

## /concurrency/01.md
# Concurrency 
- The alternative approach to concurrency is to run multiple
Thread 1
threads in a single process.

# Output operation 
- If bytes flow from main memory to device like printer,display screen,or network connection etc,this is called as output operation .
- If bytes flow from device like printer,display or network connection etc,to main memory this is called as input operation .
- This cin is predefined object of istream class . It is connected with the standard input device ,which is usually keyboard .
- As we know that same name cant be give to multiple variables,function,classes etc, in the same scope. So to overcome this situtation namespace is introduced .
 # Data types
 - Data types are used to tell the varaible the type of the data they can store .
 - Wheneve a varaible is defined in C++ the complier allocates some memory for that variable based on the data type with which it is declated .
 - Every data type requires a different amount of memory .
 - There are these data types in the c++ 
   - Primary,built-in or fundamental data type .
    - Integer 
    - Character 
    - Boolean
    - Floating Point 
    - Double Floating Point 
    - Void 
    - Wide Character 

   # Derived data types 
   - Function 
   - Array 
   - Pointer 
   - Refernce 
   # User-defined data types 

   shiit@shiit-Katana-GF76-11UC:~/Neo$ ./Neo-Browser-1.1.8.AppImage

---

## /theory/Basic.md
- g++ filename_cpp This is the build command for the code 
- Exe file name is the running command `.\a.exe` .
- Conditional statement can be use to make the code reliable to run the code after checking the conditions .
- `g++ -o 01 01.cpp`
- `./01`

# Recursion 

---

## /ICMP.md
# Details 
- `ACM ICPC`(Association for Computing Machinery – International Collegiate Programming Contest) is a worldwide annual multi-tiered programming contest being organized for over thirteen years. The contest is sponsored by IBM. 
- Codechef is the way for indian to be in the finalist .
- Learning about the algorithm is the key  here .

- 6200174 icpc efforts money code blahh

---

## /codechef/Hasing/01.md
(empty)

---

## /codechef/Linkedlist/01.md
# Singly Linked list 
A singly linked list is a fundamental data structure, it consists of nodes where each node contains a data field and a reference to the next node in the linked list. The next of the last node is null, indicating the end of the list. Linked Lists support efficient insertion and deletion operations.
- Here all elements are not stored in the contiguous memory location. Instead each elements(called node) contains data part and a refernce(pointer) to the next node in the sequence .
- `No memory waste` Unlike arrays there is no need to pre-allocate fixed amount of memeory,reducing the chances of the memory waste .
- `Reverse traversal is difficult` Without previous pointer traversing backward is not straighforward .
- Insertion and Deletion at specific position is  fast here .
-`Head` A pointer that points to the first node of the linked list ,if the list is the empty the head pointer is `NUll` .
- `Tail node` The last node is known as the tail node .
- 

---

## /codechef/contest/START210D/01.md
# Contest reviw 
- The three qs was easy out of which i was able to solve only two .
- And the issue was came related to the qs number 4.
- After the submission i tried to solve the qs number 6 with the helps of the AI which i didnot even submitted .
- The issue which i am facing ryt now is realted to the  passing the test cases . Even though i am able to solve the question .

---

## /leetcode/PrefixSum/01.md
# Theory 
- In most simple term we can say that prefix sum is the technique to calculate the sum at 'i' index in the array from the 
start of the array to the i th where we want to know the prefix sum .
- It reduce the time complexity for the calculating the sum queries .
- In prefix sum we have the base case to avoid the bug free code .

---

## /math/Base.md
# Concept of the base 
- Base in the context of the number system means the number of the uniques digit used to represent the number in the system .
- Base 2 means two unique number 
- Base 3 means three unique number 

---

## /DS/Graph/01.md
# Graph 
- It is the data structure used to model relationship between entities .
- Node is the point .
- Edge are the line connecting two points .
- Graphs which have direction associated with the edge is known as the directed graph .
- Graphs which dont have direction associated with the edge is undirected graph .

---

## /luv/01.md
# Some important math function 
- min(A,B) - Returns the smallest among 22 integers AA and BB

---

## /STL/01.md
Standard Template Library (STL) is a collection of C++ template classes providing containers to store data (vectors, lists, maps) as well as algorithms to perform around them (searching, sorting).
Major advantages of using STL are reusability, efficiency, readability, and consistency in coding practices.
Moreover, you do not have to worry about the time and space complexity while using STL since it is already implemented in an optimal way.
# Vector 
- It is important to note that although vector provides insertion and deletion operations, both of these happen at the back of the vector in constant time. If we try to insert/delete at a random position that would take linear time.
- `s.begin() and s.end()` are iterators, not numbers.
- Container 
-

---

## /luv/Binary-Decimal/01.md
(empty)

---

## /concept/01.md
# Map detatiled 

---

## /concept/Inheritance/01.md
# Virtual function  
- A virtual function is a function declared in a base class using the keyword `virtual` and is meant to be overridden in a derived class.
It allows runtime polymorphism, meaning the function that gets executed is determined at runtime based on the object type, not the pointer/reference type .
- In simple word it means that it allow the c++ to decide which version of the function it should use .

-`Override` means to replacce something with your own version .
- `Defination`-> function defination means the actual instrution which we write in code .
- `Declaration` -> Function declaration just tell the name .

# Pure Virtual Function 
- A pure virtual funtion is a virtual function in the c++ that has no defination in the base class and must be overriden in the derived class . In simple a function with no body,forces the derived class to write its own version .

# Abstract class 
- It is a class that has at least one pure virtual function and cannot create objects. It only provides a blueprint for derived classes . Means  It gives the idea/struture and the derived class complete it .



#  Normal class 
-  It is the regular class that can create object and contains complete defination of all it functions .

---

## /concept/class/class.md
(empty)

---

## /concept/class/01.md
# Structure 
- In C++ a structure is a user defined data types that allow you to group together varaible of different data types under a single name. Each variable inside the structure is refered to as 'member or field' .
# Declaration 
- The declaration itself does not allocated any memory ,It just tells the compiler what any struct will look like . We can not use the declaration to store data, It is necessary so the compiler know the structure layout before a variable of that type is created .
- To define the structure we use the keyword struct followed by the name of the structure name and a list of member varaible enclosed in curly braces .
 # Defination 
- It is the point where we assign the value to the struct varaible/member function .


# Accessing Structure Members 
- You can access the member of a structure using the dot(.) operator .



# Union 
- In c++ union is special class type that allows you to store differnt  data type in the same memory location but only one member can hold a value at any time . All member of the union share the same memory .
```c++
union Data {
    int i;
    float f;
    char c;
};

Data d;
d.i = 10;   // Now d.i holds 10
d.f = 3.14; // Now d.f holds 3.14, but d.i is overwritten
```
