#include<bits/stdc++.h>
using namespace std;

void slove(){
	long long dp[101]={0},n;
	cin>>n;
	dp[1]=1;dp[2]=2;dp[3]=4;
	for(int i=4;i<101;i++)
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	cout<<dp[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		slove();
		cout<<endl;
	}
	return 0;
}
