#include<iostream>
using namespace std;
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    } 
int main()
{
    string str,part;
    cout<<"ENTER THE SENTENCE"<<endl;
    getline(cin,str);
    cout<<"ENTER THE PART"<<endl;
    getline(cin,part);
    str=removeOccurrences(str,part);
    cout<<str<<endl;
    return 0;
}