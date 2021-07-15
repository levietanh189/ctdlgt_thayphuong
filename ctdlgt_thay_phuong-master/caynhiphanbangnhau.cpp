#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[10000],b[10000],n,m,x,y;
char z;
void inp(int c[],int d){
    cin>>x>>y>>z;
    c[0]=x;
    if(z=='L') c[1]=y;
    else c[2]=y;
    while(--d){
        cin>>x>>y>>z;
        for(int i=0;i<10000;++i){
            if(c[i]==x){
                if(z=='L') c[2*i+1]=y;
                else c[2*i+2]=y;
                break;
            }
        }
    }
}
bool check(){
    if(n!=m) return 0;
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        memset(a,0,n);
        inp(a,n);
        cin>>m;
        memset(b,0,m);
        inp(b,m);
        cout<<check()<<endl;
    }
}
