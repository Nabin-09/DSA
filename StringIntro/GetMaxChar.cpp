#include<iostream>
#include<string>
using namespace std;
char GetMaxChar(string s){
    int arr[26] = {0};
for(int i = 0 ;i<s.length() ; i++){
    char ch = s[i];
    int number = 0;
    if(ch>='a' && ch<='z'){
        number= ch-'a';
    }
    else{
        number = ch - 'A';
    }
    arr[number]++;
}
 int ans = 0;
 for(int i = 0; i<26 ; i++){
    int maxi=-1;
   
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
}
char finalans =  'a'+ans;
return finalans;
}
int main(){
    string str;
     cout<<"Enter the String"<<endl;
     cin>>str;
     cout<<GetMaxChar(str);
     return 0;
}