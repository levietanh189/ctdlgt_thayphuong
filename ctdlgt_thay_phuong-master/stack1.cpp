#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
    string s;
    int n;
    stack<int> ck;
    while(cin>>s){
        if(s=="push"){
            cin>>n;
            ck.push(n);
        }
        else if(s=="pop") ck.pop( );
        else if(s=="show"){
            vector<int> a;
            if(ck.size( )==0){
                cout<<"empty\n";
                continue;
            }
            while(ck.size( )>0){
                a.push_back(ck.top( ));
                ck.pop( );
            }
            reverse(a.begin( ),a.end( ));
            for(int i=0;i<a.size( );i++){
                cout<<a[i]<<" ";
                ck.push(a[i]);
            }
            cout<<endl;
        }
    }
}
