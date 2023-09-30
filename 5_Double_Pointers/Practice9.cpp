#include<iostream>
using namespace std;

int main()
{
    char arr[]="abcde";
    char *p = &arr[0];
    p++;
    cout << p <<endl;
    return 0;
}
/*OUTPUT: 
In character array the pointer prints whole array but here we have incremented the pointer 
hence the output will be "bcde"     */