#include<iostream>
using namespace std;

int main()
{
    /*REFERENCE VARIABLES: 
    C++ added the so-called reference variables (or references in short). A reference is an alias, or an alternate name to an existing variable */
    int i = 5;
    int &j = i;//Creating a  reference variable
    cout<<"  i : . . .  "<<i<<endl;
    cout<<"  j : . . .  "<<j<<endl;
    /*OUTPUT : 
     i : . . .  5   
     j : . . .  5  */
     i++;//i++ or j++ refer to the samething
     cout<<"  j : . . .  "<<j<<endl;
     cout<<"  i : . . .  "<<i<<endl;
     /*OUTPUT  : 
     i : . . .  5   
     j : . . .  5   
     j : . . .  6   
     i : . . .  6*/
     
    return 0;
}