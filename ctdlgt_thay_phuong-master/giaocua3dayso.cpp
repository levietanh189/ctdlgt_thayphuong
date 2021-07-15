#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int m,n,k;
        cin>>m>>n>>k;
        vector<ll> a(m),b(n),c(k);
        for(int i=0;i<m;++i) cin>>a[i];
        for(int i=0;i<n;++i) cin>>b[i];
        for(int i=0;i<k;++i) cin>>c[i];
        vector<ll> tmp,ans;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(tmp));
        set_intersection(tmp.begin(),tmp.end(),c.begin(),c.end(),back_inserter(ans));
        sort(ans.begin(),ans.end());
        if(ans.empty()) cout<<"-1";
        else for(auto& i:ans) cout<<i<<" ";
        cout<<"\n";
    }
}
