#include<iostream>
using namespace std;

int main()
{
    int *p = 0;
    int first  = 10;
    *p = first;
    cout<<*p<<endl;
    return 0;
}
//OUTPUT: SEGMENTATION ERROR
//*p  = &first hona chahiye tha