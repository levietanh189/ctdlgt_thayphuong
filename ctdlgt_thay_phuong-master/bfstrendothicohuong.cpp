#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;


vector<int> res[1005];
bool ok[1005];

void BFS(int k){
    queue<int> q;
    q.push(k);
    ok[k]=true;
    cout<<k<<" ";
    while(q.size( )>0){
        int top=q.front( );
        q.pop( );
        for(int i=0;i<res[top].size( );i++){
            if(!ok[res[top][i]]){
                ok[res[top][i]]=true;
                q.push(res[top][i]);
                cout<<res[top][i]<<" ";
            }
        }
    }
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) res[i].clear( );
        memset(ok,false,sizeof(ok));
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<b;i++){
            int u,v;
            cin>>u>>v;
            res[u].push_back(v);
        }
        BFS(c);
        cout<<endl;
    }
}
