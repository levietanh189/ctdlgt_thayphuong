#include<bits/stdc++.h>
using namespace std;

long long count(int a[],int n,int b[],int x){
	if(x==0) return 0;
	if(x==1) return b[0];
	int tmp = upper_bound(a,a+n,x)-a;
	long long ans = n-tmp;
	ans+=b[0] +b[1];
	if(x==2) ans-=(b[3] +b[4]);
	if(x==3) ans+=b[2];
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+1],b[m+1];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int d[10]={0};
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(b[i]<5) d[b[i]]++;
		}
		sort(b,b+m);
		int dem=0;
		for(int i=0;i<n;i++){
			dem+=count(b,m,d,a[i]);
		}
		cout<<dem<<endl;
	}
	return 0;
}
