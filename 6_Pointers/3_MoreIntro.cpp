#include<iostream>
using namespace std;
int main(){
    // int *p; This is a very bad practice as pointer points to any memory
    //assign it a value 0 if ever needed to create a pointer in such way its NULL POINTER
    // cout<<p<<endl; 
    //VARIOUS WAYS TO MAKE A POINTER
    int i = 5;
    int *ptr = &i;
    int *p = 0;//creating a null pointer
    p = &i;
    cout<<"Adress of i is : "<<ptr<<endl;
    cout<<"Adress of i is : "<<p<<endl;//both print thr adress of var i successfully
    //OUTPUT
    // Adress of i is : 0x61ff04
    // Adress of i is : 0x61ff04
    //TRYING OPERATIONS ON THE VAR ANF EFFECTS ON ITS ADRESS
    int num = 5;
    int *pt = &num;
    cout<<"Value of num : "<<num<<endl;//value of num is 5
    cout<<"Address of num : "<<pt<<endl;//address of num is 0x61fefc
    num++;//or writing *pt++ is equivalent
    cout<<"Value of num : "<<num<<endl;//value of num is incremented 
    cout<<"Address of num : "<<pt<<endl;//address if num remains same
    //OUTPUT
    /* Value of num : 5
    Address of num : 0x61fefc
    Value of num : 6         */

}