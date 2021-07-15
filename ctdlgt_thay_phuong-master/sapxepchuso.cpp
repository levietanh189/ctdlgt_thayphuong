#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n+5],k=0;
		int d[10]={0};
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			while(a[i]!=0){
				d[a[i]%10]=1;
				a[i]/=10;
			}
		}
		for(int i=0;i<10;i++){
			if(d[i]==1) cout<<i<<" ";
		}
		cout<<endl;
	}
}
