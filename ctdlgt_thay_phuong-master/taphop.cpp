#include<iostream>
using namespace std;
int count=0;
void solve(int a[],int n,int k,int s,int idx){
    for(int i=a[idx-1]+1;i<=n-k+idx;++i){
        a[idx]=i;
        if(idx==k){
            int sum=0;
            for(int j=1;j<=k;++j){
                sum+=a[j];
            }
            if(sum==s) ++count;
        }
        else solve(a,n,k,s,idx+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,s;
    while(cin>>n>>k>>s){
        if(n==0 && n==k && s==n) return 0;
        else{
            count=0;
            int a[k+1];
            a[0]=0;
            solve(a,n,k,s,1);
            cout<<count<<endl;
        }
    }
}
