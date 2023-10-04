#include<iostream>
using namespace std;
int &Func(int a){
    int num = a;
    int &ans= num;
    return num;
}//ONE OF THE WORST PRACTICE TO FOLLOW as these are local variables and they dont exist outside
//function hence,its useless(same goes with pointer)
int main()
{
    int n ;
    cin>>n;
    int arr[n];//Very bad practice ,we must know the size of array at time of compilation and not at the time of 
    //runtime as a program is assigned two types of memory before it starts ...1)Stack memory(smaller) ans
    //2)Heap memory(Larger Memory) and if we know the size of memory of array at time of compilation
    //the needed stack memory is alredy assigned and therefore, if we take input the from user..there are 
    //chances that the stack memory assigned is too small and the program might crash
    return 0;
}