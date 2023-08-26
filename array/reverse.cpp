#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5]={4,6,56},e=5,temp;
    for(int i=0;i<e;i++){
        temp=arr[i];
        arr[i]=arr[e];
        arr[e]=temp;
        e--;
    }
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" "<<endl;
    }
        return 0;
}
