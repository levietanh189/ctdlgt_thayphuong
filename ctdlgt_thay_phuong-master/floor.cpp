#include<bits/stdc++.h>

using namespace std ;

int main(){
	int z;
	cin>>z;
	while(z--){
		long long n , x;
		cin>>n>>x;
		long long *a = new long long[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long min = a[0] ;
		long long b = 0;
		for(long long i=1;i<n;i++){
			if(min>a[i]){
				i = b;
			}
		}
		if(a[b] > x) cout<<"-1"<<endl;
		else {
			long long max=a[b];
			long long c = 0;
			for(long long i=0;i<n;i++){
				if(max<=a[i]&&a[i]<=x){
					c=i;
				}
			}
			cout<<c+1<<endl;
		}
	}
	return 0;
}
