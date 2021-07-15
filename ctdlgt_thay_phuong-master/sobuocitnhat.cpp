#include<bits/stdc++.h>
using namespace std;
int b[1001],c[1001];
void slove(){
	int n;
	int min=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
		    cin>>b[j];
			c[0]=1;
		}
		for(int j=1;j<n;j++)
		{
		  	c[j]=1;
		  	for(int k=0;k<j;k++)
		  	{		  
		   		if(b[j]>=b[k]&&c[j]<c[k]+1)
		        c[j]=c[k]+1;
		   }
		   	min=max(min,c[j]);
	}
	cout<<n-min;
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
