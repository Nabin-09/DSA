#include<iostream>
using namespace std;
int main(){
    int num = 7;
    cout<<num<<endl;
    cout<<"adress of num : "<<&num<<endl;//hexadecimal format me print hoga
    //pointer stores the adress of variable
    // & is called address of operators
    int *ptr= &num;// * is called Dereference operators(it gives value at a address)
    // therefore, *ptr gives the value of address at ptr
    cout<<"adress of num  :"<<ptr;
    return 0;
}