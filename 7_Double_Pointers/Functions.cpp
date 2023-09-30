//LECTURE : 27
#include<iostream>
using namespace std;
 void update(int **p){
    //ALL THE FOLLOWING OPERATIONS WERE PERFORMED INDIVIDUALLY

        // p = p+1;
        /*OUTPUT : NO CHANGES(DUE TO PASS BY VALUE)
    Before >> : 5
    Before >> : 0x61ff08
    Before >> : 0x61ff04
    After >> : 5
    After >> : 0x61ff08
    After >> : 0x61ff04
        */
  
        // *p = *p +1;
        /*OUTPUT : CHANGES OCCUR
    Before >> : 5
    Before >> : 0x61ff08
    Before >> : 0x61ff04
    After >> : 5
    After >> : 0x61ff0c
    After >> : 0x61ff04
        */

        **p = **p + 1;
        /*OUTPUT:
        Before >> : 5
        Before >> : 0x61ff08
        Before >> : 0x61ff04
        After >> : 6
        After >> : 0x61ff08
        After >> : 0x61ff04
        */
         
    }
int main(){
   
   int  i = 5;
   int *p = &i;
   int **p2 = &p;
   cout<<"Before >> : "<<i<<endl;
   cout<<"Before >> : "<<p<<endl;
   cout<<"Before >> : "<<p2<<endl;
   update(p2);
   cout<<"After >> : "<<i<<endl;
   cout<<"After >> : "<<p<<endl;
   cout<<"After >> : "<<p2<<endl;
    return 0;
}