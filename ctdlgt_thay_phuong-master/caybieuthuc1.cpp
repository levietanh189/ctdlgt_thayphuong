#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        stack<string> st;
        for(int i=0;i<s.length();++i){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' ||s[i]=='/'){
                string s1=st.top(); st.pop();
                string s2=st.top();st.pop();
                string s3=s2+s[i]+s1;
                st.push(s3);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<"\n";
    }
}
