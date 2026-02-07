# Sorting 
- It is the fundamental algorithm desing problem . Many efficient algortihm use sorting as subroutine,because it is often easier to process data if the elements are in sorted order .
- The efficient general sorting algorithm works in `O(n log n)` time. and many algorithm that uses sorting as a subroutine also have this time complexity .
- `O(n^2)` algorithms => Simple algo for the sorting an arrays work in this time complexity and usually consit of the two nested loops . The famous of this time complexity is the bubble sort . Where the elements "bubble" in the array according to their values . Bublle sort consists of n rounds , On each round the algorithm iterated through the elements of the array .Whenever two consecutive elemetns are found  that are not in correct order ,the algorithm swaps them .
- Bubble sort is an example of sorting algorithm that always swaps the consecutive elements in the array . It turns out that the time complexity of such an algorithm is always at least 0(n^2) . becuz in the worst case 0(n^2) swaps are required for the sorting the array .
- After the first round of the algorithm, the algorithm will be in the correct position and in general after `k` rounds. the k larget elements will be in the correct postions . Thus after n rounds the elements will be sorted .
- The number of the inversion indicated how much work is needed to sort the array . An array is completly sorted whene there is nor inversions . Swapping a pair of consecutive elements that  are in the wrong order removes exactly one inversion from the array .

# O(n log n) 
- It is possible to sort an array efficiently in `O(n log n)` time using algorithm that are not limited to swapping consecutive elements . Once such algorithm is `merge sort` . Which is based on the recursion . 

