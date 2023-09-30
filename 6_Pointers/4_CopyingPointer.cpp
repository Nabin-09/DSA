#include<iostream>
using namespace std;
int main(){
    /* NULL POINTERS HAVE VALUE 0
    int *p = 0;
    int *q = 0;
    cout<<"Value of p is : "<<p<<endl;    
    cout<<"Value of q is : "<<q<<endl; 
    OUTPUT   
    Value of p is : 0
    Value of q is : 0  */

    //COPYING A POINTER TO ANOTHER
    int i = 5;
    int *p = &i;
    int *q = p;
    cout<<"Value of p : "<<*p<<endl;
    cout<<"Address of p : "<<p<<endl;
    cout<<"Value of q : "<<*q<<endl;
    cout<<"Address of q : "<<q<<endl;
    /*OUTPUT 
    Value of p : 5
    Address of p : 0x61ff04
    Value of q : 5
    Address of q : 0x61ff04*/
    /*POINTER arithmetic: IMPORTANT CONCEPT */
   int m=9;
   int *t=&m;
   cout<<(*t)++<<endl;
   cout<<++(*t)<<endl;
  *t=*t+1;
   cout<<*t<<endl;
   /*OUTPUT: 
    9
    11
    12*/
    return 0;   
}