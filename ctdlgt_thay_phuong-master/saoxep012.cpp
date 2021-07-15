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
		int b[n+5],k=0;
		for(int i=0;i<n;i++){
			if(a[i] ==0) b[k++]=a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i] ==1) b[k++]=a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i] ==2) b[k++]=a[i];
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
