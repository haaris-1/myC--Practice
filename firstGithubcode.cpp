#include "iostream"
#include "stack"
using namespace std;

int main(){

    cout << "Hello gitHub\n";
    cout<<"Hey git \n";
    stack<char> st;
    string s;
    // cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        cout<<st.top();
        st.pop();
    }
    return 0;
}
