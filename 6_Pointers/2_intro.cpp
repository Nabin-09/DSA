#include<iostream>
using namespace std;
int main(){
    //always make the pointer of the type of variable to be used such as 
    //if a adress of a char is to be stored make a char type pointer.
    char ch = 'a';
    char *p = &ch;
    int num = 74;
    int *ptr = &num;
    cout<<"VALUE OF ch : "<<ch<<endl;//prints value o ch
    cout<<"Adress of ch : "<<p<<endl;//prints address of ch
    cout<<"Printing adress of ch in other way : "<<&ch<<endl;//prints the address if ch
    cout<<"Size of ch : "<<sizeof(ch)<<endl;//we know it takes 1 byte
    cout<<"Size of pointer ptr : "<<sizeof(p)<<endl;//pointers always take 4 byte as always they will store
    //adress which is of limited length
    cout<<"Size of num : "<<sizeof(num)<<endl;//we know its of 4 byte.
    cout<<"Size of pointer ptr : "<<sizeof(ptr)<<endl;//as always pointer will be of 4 bytes(it depends on
    //architecture of system)
    return 0;
}
//output:
// VALUE OF ch : 97
// Adress of ch : 0x61ff08
// Printing adress of ch in other way : 0x61ff08