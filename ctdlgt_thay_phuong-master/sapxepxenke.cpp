#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int i=0,j=n-1;
		while(i<j){
			cout<<a[j]<<" "<<a[i]<<" ";
			i++;j--;
			if(i==j) cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
