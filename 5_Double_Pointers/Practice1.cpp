//LECTURE 26:
#include<iostream>
using namespace std;
int main(){
    int f = 8;
    int s = 18;
    int *ptr = &s;
    *ptr = 9;
    cout<<"  First :  "<<f<<"  Second :  "<<s<<endl;
    return 0;
}
/*OUTPUT: 
  First :  8  Second :  9*/