#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[101],k,dem=0;
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j] == k) dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
