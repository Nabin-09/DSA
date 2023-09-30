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
int main(){
    char name[20];
    cout<<"apna naaam likh : "<<endl;
    cin>>name;
    cout<<"Tera naam hai : "<<name<<endl;
    cout<<"Length of your name : "<<Length(name)<<endl;
    return 0;
}