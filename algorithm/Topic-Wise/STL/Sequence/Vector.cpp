#include<vector>
#include<iostream>
using namespace std;
// Key operations of vector in c++ stl are
// 1. push_back() - to add an element at the end of the vector
// 2. pop_back() - to remove the last element of the vector
// 3. size() - to get the number of elements in the vector
// 4. at() - to access an element at a specific index
// 5. clear() - to remove all elements from the vector
// 6. empty() - to check if the vector is empty or not
// 7. insert() - to insert an element at a specific position
// 8. erase() - to remove an element from a specific position
// 9. resize() - to change the size of the vector
// 10. swap() - to swap the contents of two vectors
// 11. front() - to access the first element of the vector
// 12. back() - to access the last element of the vector
// 13. begin() - to get an iterator pointing to the first element of the vector
// 14. end() - to get an iterator pointing to the past-the-end element of the vector
// 15. rbegin() - to get a reverse iterator pointing to the last element of the vector
// 16. rend() - to get a reverse iterator pointing to the past-the-end element of the vector
// 17. assign() - to assign new values to the vector
// 18. emplace_back() - to construct an element in place at the end of the vector
// 19. emplace() - to construct an element in place at a specific position in the vector
// 20. shrink_to_fit() - to reduce the capacity of the vector to fit its size
// 21. reserve() - to request a change in the capacity of the vector
// 22. capacity() - to get the current capacity of the vector
// 23. max_size() - to get the maximum number of elements that the vector can hold
// 24. data() - to get a pointer to the underlying array of the vector
// 25. swap() - to swap the contents of two vectors
// 26. operator[] - to access an element at a specific index using the subscript operator
// 27. operator= - to assign one vector to another
// 28. operator== - to compare two vectors for equality
// 29. operator!= - to compare two vectors for inequality
// 30. operator< - to compare two vectors for less than
// 31. operator> - to compare two vectors for greater than
// 32. operator<= - to compare two vectors for less than or equal to
// 33. operator>= - to compare two vectors for greater than or equal to
// 34. operator+ - to concatenate two vectors
// 35. operator- - to remove elements of one vector from another
// 36. operator* - to get the dot product of two vectors
// 37. operator/ - to get the scalar division of a vector
// 38. operator% - to get the modulus of a vector
// 39. operator++ - to increment all elements of the vector
// 40. operator-- - to decrement all elements of the vector
// 41. operator[] - to access an element at a specific index using the subscript operator
// 42. operator= - to assign one vector to another
// 43. operator== - to compare two vectors for equality
// 44. operator!= - to compare two vectors for inequality
// 45. operator< - to compare two vectors for less than
// 46. operator> - to compare two vectors for greater than
// 47. operator<= - to compare two vectors for less than or equal to
// 48. operator>= - to compare two vectors for greater than or equal to
// 49. operator+ - to concatenate two vectors
// 50. operator- - to remove elements of one vector from another
// 51. operator* - to get the dot product of two vectors
// 52. operator/ - to get the scalar division of a vector
// 53. operator% - to get the modulus of a vector
// 54. operator++ - to increment all elements of the vector
// 55. operator-- - to decrement all elements of the vector
// 56. operator[] - to access an element at a specific index using the subscript operator
// 57. operator= - to assign one vector to another
// 58. operator== - to compare two vectors for equality

int main () {
    vector<int>v; // declaration of a vector of integers    
    v.push_back(1); // adding an element to the end of the vector
    v.push_back(1); // adding an element to the back of the vector
    v.push_back(2); // adding an element to the back of the vector
    cout<<v.at(0)<<endl; // output: 1
    cout<<v.size()<<endl; // output: 3

    vector<int>v1(3,1); // declaration of a vector of integers with size 3 and all elements initialized to 1
    for(int i = 0;i<v1.size();i++){
        cout<<v1.at(i)<<endl; // output: 1 1 1  
    };

    // comparaing two vectors  v and the v1 it check the size of the vector and the element of the vector if they are same then it return true otherwise it return false
    if(v==v1){
        cout<<"v and v1 are equal"<<endl; // output: v and v1 are not equal
    } else {
        cout<<"v and v1 are not equal"<<endl; // output: v and v1 are not equal
    };
    // concatenating two vectors v and v1 it will create a new vector v2 which will contain all the elements of v and v1
};