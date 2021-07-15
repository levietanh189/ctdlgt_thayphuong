#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ans;
vector<int> tmp;
int n,p,s,sum;
bool prime(int x){
    for(int i=2;i*i<=x;++i) if(x%i==0) return false;
    return true;
}
void solve(int x,int k){
    if(x==n){
        if(sum==s){
            ans.push_back(tmp);
            
        }return;
    }
    for(int i=k;i<=s;++i){
        if(prime(i)){
            sum+=i;
            tmp[x]=i;
            solve(x+1,i+1);
            sum-=i;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n>>p>>s;
        tmp.resize(n);
        solve(0,p+1);
        cout<<ans.size()<<"\n";
        for(auto& i:ans){
            for(auto& j:i) cout<<j<<" ";
            cout<<"\n";
        }
        ans.clear();
        tmp.clear();
    }
}
