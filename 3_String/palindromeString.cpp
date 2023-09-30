#include<iostream>
#include<string>
using namespace std;
int Length(char name[]){
    int count=0;
    for(int i = 0; name[i] !='\0'; i++){
        count++;
    }
 return count;
}
void palindrome(char word[]){
    int s=0,e=Length(word)-1;
    while(s<e){
        if(word[s] != word[e]){
            cout<<"WORD IS NOT PALINDROME .... "<<endl;
            break;
        }
        s++;
        e--;
        else{
            cout<<"WORD IS PALINDROME . . . "<<endl;
        }
    }
}
int main(){
    char name[20];
    cout<<"ENTER YOUR NAME .. : "<<endl;
    cin>>name;
    palindrome(name);
    return 0;
}