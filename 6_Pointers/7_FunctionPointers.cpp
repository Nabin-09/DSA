//LECTURE 26 : 46:25
#include<iostream>
using namespace std;
void print(int *p){

    cout << *p<< endl;

}
void update(int *p){

    p = p + 1;

}
int getSum(int arr[],int n){
     
     int sum = 0;
     for(int i = 0;i<n;i++){

        sum = sum + arr[i];

     }
    return sum;
}
    int main(){
        
        int value  = 5;
        int *p = &value;
        print(p);//Prints the value of p (5)
        cout<< "Before : "<<p<<endl;//Prints the address of p
        update(p);
        cout << "After  : "<< p<<endl;//No changes after updation and prints the same address
        int arr[5]={ 1,2,3,4,5};
        cout<<getSum(arr,5)<<endl;

    return 0;
}