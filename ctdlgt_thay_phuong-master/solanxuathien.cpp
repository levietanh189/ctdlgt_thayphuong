#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x,dem=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==k) dem++;
		}
		if(dem>0) cout<<dem;
		else cout<<"-1";
		cout<<endl;
	}
	return 0;
}
