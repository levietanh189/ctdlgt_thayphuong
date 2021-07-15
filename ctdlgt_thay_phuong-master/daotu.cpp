#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string s,tmp;
        getline(cin,s);
        stringstream ss(s);
        stack<string> st;
        while(ss>>tmp){
            st.push(tmp);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<"\n";
    }
}
