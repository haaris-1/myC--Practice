#include "iostream"
#include "stack"
using namespace std;

int main(){

    cout << "Hello gitHub\n";
    cout<<"Hey git \n";
    stack<int> st;
    string s;
    cin.ignore();
    getline(s,cin);
    for(int i=0;i<s.length();i++){
        s.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
