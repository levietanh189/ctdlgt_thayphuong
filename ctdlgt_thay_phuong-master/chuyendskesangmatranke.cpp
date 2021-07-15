#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int a[1001][1001]={};

void xuli(string s, int x,int n){
    for(int i=0;i<s.size( );i++){
        int tmp=0;
        while(s[i]<='9' && s[i]>='0'){
            tmp=tmp*10+s[i]-'0';
            i++;
        }
        if(tmp<n && tmp>0){
            a[x][tmp-1]=1;
            a[tmp-1][x]=1;
        }
    }
}

int main( ){
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    int n;
    cin>>n;
    cin.ignore( );
    for(int i=0;i<n;i++){
        string s="";
        while(s=="") getline(cin,s);
        xuli(s,i,n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
