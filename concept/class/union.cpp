#include<bits/stdc++.h>
using namespace std;
union Student {
    int Roll;
   // string Name;  This give the error becus this is not the trival as it is non trival which require the proper construction and destruction which union doesnt support .
   char Name[100]; 
   char Section;
};
/*Here is the key of the Union it is going to stroe the one value at a time that it */
int main () {
    Student s1;  // This is the instance(object) of the union student
    cin>>s1.Name;  // Here we assign the first value into it 
    cout<<"The name is "<<s1.Name<<endl;
    cin>>s1.Roll; // Here we assign the second value which overwrite the first one 
    cout<<"The Roll number is "<<s1.Roll<<endl;
    cin>>s1.Section; /*Here we assign the third value which overwrite the second one and new is there */
    cout<<"The Section is "<<s1.Section<<endl;
    



    
   
}