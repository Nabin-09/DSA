#include<iostream>
using namespace std;

void update(int *p ){
    *p = (*p) * 2;
}
int main()
{
    int i = 20;
    update(&i);
    cout<< i <<endl;
    return 0;
}
/*OUTPUT : 
40   */