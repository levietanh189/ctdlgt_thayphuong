#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long a[n];
        long long ans=INT_MIN,dp[n];
        for(int i=0;i<n;++i) cin>>a[i];
        dp[0]=a[0],dp[1]=a[1],dp[2]=a[2]+a[0];
        for(int i=3;i<n;++i){
            dp[i]=max(dp[i-3],dp[i-2])+a[i];
            if(dp[i]>ans) ans=dp[i];
        }
        cout<<ans<<endl;
    }
}
