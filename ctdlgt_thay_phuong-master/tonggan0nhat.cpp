#include<bits/stdc++.h>
using namespace std;

/*int tong(int a[],int n){
	int c[1001],d[1001],h=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]>=0) c[h++]=a[i];
		else d[k++]=a[i];
	}
	return c[0]+d[k-1];
}*/

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
			int tong=a[0]+a[1];
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(abs(a[i]+a[j])<abs(tong)) tong=a[i]+a[j];
				}
			}
		cout<<tong;
		cout<<endl;
	}
	return 0;
}
