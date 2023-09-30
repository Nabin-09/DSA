#include<iostream>
using namespace std;
int main(){
    /*  Why do we dont create a special data type named pointer and not use int *ptr to create pointers?
    ANS: Because when we write int *ptr it also describes the type of pointer such as from above 
    statement we are able to understand that we are accessing a pointer of an int data type.
    ALSO, in memory level we will be able to know how many bytes to consider in memory level
    such as if i make int *ptr or double *pt we can understand that we will be using 4 bytes and
    8 bytes for the respective data in operations
    */
   /*DOUBLE POINTER: Creating a pointer corressponding to another Pointer
   */
  int i = 5;
  int *ptr = &i;
  int **ptr2 = &ptr;
  int ***ptr3 = &ptr2;
  cout<<"Ptr : >> "<<ptr<<endl;//Prints address of i
  cout<<"Ptr2 : >> "<<ptr2<<endl;//Prints address of ptr
  cout<<"Ptr3 : >> "<<ptr3<<endl;//Prints address of ptr2
  cout<<"Value at ptr : >> "<<*ptr<<endl;//Prints value of i
    return 0;
}