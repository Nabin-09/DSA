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
void reverse(char name[]){
    int n=Length(name);
    int s=0;
    int e = n-1;
     char temp;
    while(s<e){
        temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        s++;
        e--;
    }
}
int main(){
    char name[20];
    cout<<"apna naaam likh : "<<endl;
    cin>>name;
    char name1[20];
    cout<<"Tera naam hai : "<<name<<endl;
    cout<<"Length of your name : "<<Length(name)<<endl;
    reverse(name);
    cout<<"your reversed name : "<<name;
    return 0;
    if(name1==name)
    cout<<"palindrome"<<endl;
    else
    cout<<"NOT PALINDROME"<<endl;
}