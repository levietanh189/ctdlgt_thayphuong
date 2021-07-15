#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,k;
		cin>>n>>k;
		int d[1000000]={0};
		d[k]=1;
		for(int i=0;i<n;i++){
			cin>>a;
			d[a]++;
		}
		if(d[k]>1) 
			cout<<"1";
		else cout<<"-1";
		cout<<endl;
	}
}
