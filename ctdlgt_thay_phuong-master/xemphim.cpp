#include <bits/stdc++.h>
using namespace std;

void slove(){
	int c,n;
    cin>>c>>n;
    int a[n];
    int dp[n+1][c+1];
    for(int i=0;i<n;++i)
    {
       cin>>a[i];
    }
    for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=c;++j)
            {
                    dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=c;++j)
            {
                    if(a[i-1]>j)
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1]]+a[i-1]);
                    }
        }
    }
    cout<<dp[n][c]<<endl; 
}

int main (){
	slove();
	cout<<endl;
}
