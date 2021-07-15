#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		int i=1;
		cin>>n>>s>>m;
		int k=s*m,j=n*(s-s/7);
		if(s*m>(s-s/7)*n) cout<<"-1";
		else{
			while(n*i<s*m){
				i++;
			}
			cout<<i;
		}
	cout<<endl;
	}
}
