#include<iostream>
using namespace std;
void printSum(int arr[][4],int i ,int j){
    cout<<"Printing the sum"<<endl;
    for(int i = 0; i<3 ; i++){
        int sum = 0;
        for(int j = 0 ; j<4 ; j++){
           sum = sum + arr[i][j];
        }
        cout<<sum<<" "<<endl;
    }
} 
int main(){
    int arr[3][4];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    printSum(arr,3,4);
    return 0;
}