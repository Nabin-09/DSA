#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<<arr<<endl;//Prints address of arr[0]
    cout<<ch<<endl;//Prints the value of ch i.e "abcde"
    char *ptr = &ch[0];
    cout<<ptr<<endl;//Prints entire string until null character
    //CASE 2 : WITH NO NULL CHARACTER
    char temp = 'a';
    char *pt = &temp;
    cout << pt << endl;//Prints any random value not address
   //NOT AT ALL RECOMMENDED TO USE POINTERS IN
   /*OUTPUT:
    0x61fef4
    abcde
    abcde
    aabcde
   */
    return 0;
}