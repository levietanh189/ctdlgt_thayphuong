#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a;
		cin>>n>>m;
		int d[m+n]={0};
		for(int i=0;i<m+n;i++){
			cin>>a;
			d[a]++;
		}
		for(int i=0;i<m+n;i++)
		if(d[i]>0) cout<<i<<" ";
		cout<<"\n";
		for(int i=0;i<n+m;i++)
			if(d[i]>1) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}
