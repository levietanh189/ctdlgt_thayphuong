#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int m,n,u;
bool vs[1001];
vector<int> list[1001];

void DFS(int u){
    vs[u]=false;
    cout<<u<<" ";
    for(int i=0;i<list[u].size( );i++){
        int v=list[u][i];
        if(vs[v]) DFS(v);
    }
}

int main( ){
    int t,x,y;
    cin>>t;
    while(t--){
        for(int i=0;i<1001;i++) list[i].clear( );
        memset(vs,true,sizeof(vs));
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            list[x].push_back(y);
        }
        DFS(u);
        cout<<endl;
    }
    return 0;
}
