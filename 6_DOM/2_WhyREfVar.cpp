#include<iostream>
using namespace std;
void update(int n){
    n++;
}
void  RefUpdate(int &n){//Reference Variables
    n++;
}
int main()
{
    //WHY REFERENCE VARIABLE
    /*IN pass by value in fuctions , we send a copy of variable,hence to update 
    and value data from main function we use reference variables*/
    int n = 5;
    cout<<"BEFORE .  .  .  . :  "<<n<<endl;
    update(n);
    cout<<"AFTER .  .  .  . :  "<<n<<endl;
    /*OUTPUT :
    BEFORE .  .  .  . :  5
    AFTER .  .  .  . :  5*/
    //Pass By Refrerence
    int &i = n;
    cout<<"BEFORE .  .  .  . :  "<<i<<endl;
    RefUpdate(i);
    cout<<"AFTER .  .  .  . :  "<<i<<endl;
    /*OUTPUT : 
    BEFORE .  .  .  . :  5
    AFTER .  .  .  . :  6*/
    return 0;
}