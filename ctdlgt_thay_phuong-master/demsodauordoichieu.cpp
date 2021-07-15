#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;

int main( ){
    int t;
    cin>>t;
    while(t--){
        string s;
        int s1=0,s2=0;
        cin>>s;
        stack <char> ck;
        for(int i=0;i<s.size();i++){
            if( s[i] == '(' || s[i] == ')' && ck.size( )==0) ck.push(s[i]);
            else if( s[i] == ')'){
                if(ck.size( )>0 && ck.top( ) == '(') ck.pop();
                else ck.push(s[i]);
            }
        }
        while(ck.size( )>0){
            if(ck.top() == '(') s1++;
            else s2++;
            ck.pop( );
        }
        cout<< s1/2 + s2/2 + s1%2 + s2%2 <<endl;
    }
    return 0;
}
