#include<iostream>
using namespace std;

int main()
{
    //WE use heap memory for array of Variable size using *New* keyword
    //Heap memory is allocated known as *Dynamic Memory Allocation*
    new char;//Returns Address(No name of memory)
    /* WE use pointer to access it */
   //char *ch = new char; 
    char c = 'q';
    cout<<"SIZE . . .  :  "<<sizeof(c)<<endl;
    char *q = &c;//Pointer memory is made in stack
    cout<<"SIZE OF POINTER  . . . : "<<sizeof(q)<<endl;
    /*OUTPUT : 
    SIZE . . .  :  1
    SIZE OF POINTER  . . . : 4    **THEREFORE IN TOTAL IS CONSUMES 5 BYTES  */ 
    return 0;
}