#include <bits/stdc++.h>
using namespace std;
int n,dp[1001][1001],k;

struct bien{
	int v=0,w=0;
};

int max(int x, int y) {
   return (x > y) ? x : y;
}

void slove() {
	cin>>n>>k;
	bien tui[n+5];
	for(int i=1;i<=n;i++) cin>>tui[i].w;
	for(int i=1;i<=n;i++) cin>>tui[i].v;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j>=tui[i].w)
				dp[i][j]=max(dp[i-1][j], dp[i-1][j-tui[i].w] + tui[i].v);
			else
				dp[i][j]= dp[i-1][j];
		}
	}
	cout<<dp[n][k];
}
int main() {
    int t;
	cin>>t;
	while(t--){
		slove();
		cout<<endl;
   }
   return 0;
}
