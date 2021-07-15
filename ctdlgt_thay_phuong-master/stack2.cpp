#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;

int main( ){
    string s;
    int n,q;
    cin>>q;
    stack <int> ck;
    while(q--){
        cin>>s;
        if(s=="PUSH"){
            cin>>n;
            ck.push(n);
        }
        else if(s=="POP" && ck.size( )>0) ck.pop( );
        else if(s=="PRINT"){
            if(ck.size( )==0) cout<<"NONE\n";
            else
                cout<<ck.top( )<<"\n";
        }
    }
    return 0;
}
