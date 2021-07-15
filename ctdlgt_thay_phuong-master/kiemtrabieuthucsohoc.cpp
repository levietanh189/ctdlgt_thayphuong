#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;

int main( ){
    int t;
    cin>>t;
    cin.ignore( );
    while(t--){
        string s;
        getline(cin,s);
        stack<char> ck;
        bool ok;
        for(int i=0;i<s.size( );i++){
            if(s[i] == ')'){
                ok=true;
                char top = ck.top( );
                ck.pop( );
                while(top != '('){
                    if( top =='+' || top =='-' || top=='*' || top=='/')
                        ok=false;
                    top = ck.top( );
                    ck.pop( );
                }
                if(ok) break;
            }
            else ck.push(s[i]);
        }
        if(ok) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}
