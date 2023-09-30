#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,7,9,12};// Only writing arr gives the address of 1st element the array
    cout<<"Address of array is : ... "<<arr<<endl;
    cout<<"Address of array is : ... "<<&arr[0]<<endl;//prints the same output
    cout<<"Value of array is : ... "<<*arr<<endl;//prints the value of element at 1st place
    /*  OUTPUT : 
    Address of array is : ...0x61fee8  */
    //SOME MORE INTERESTING RESULTS
    cout<<"4th  : ...  "<<*arr<<endl;
    cout<<"5th  : ...  "<<*arr + 1<<endl;
    cout<<"6th  : ...  "<<*(arr + 1)<<endl;
    cout<<"7th  : ...  "<<*(arr) + 1<<endl;
    /*OUPUT :
    4th  : ...  2
    5th  : ...  3   
    6th  : ...  5
    7th  : ...  3
    FORMULA : arr[i]=*(arr + i) OR  i[arr]  = *(i + arr) *****IMPORTANT 
    */
   cout<<3[arr]<<endl;//prints element at 3rd INDEX of arr ** i[arr]
   int temp[10];
   int *p = &temp[0];
   cout<<"SIZE OF TEMP : .... " <<sizeof(temp)<<endl;
   cout<<"SIZE OF POINTER : .... " <<sizeof(p)<<endl;
   //INTERESTING OPERATION
   int ar[10];
//    cout<<ar+=1; ERROR
   int *kl = &ar[0];
   cout<<kl<<endl;
   kl = kl + 1;//gives no error instead the value of location increases by 4 bytes
   cout<< kl <<endl;
    return 0;
}