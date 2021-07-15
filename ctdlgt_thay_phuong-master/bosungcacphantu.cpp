#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,bool> d;
		vector<int> a(n);
		int l,r;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		if(i==0) l=r=a[i];
		l=min(l,a[i]);
		r=max(r,a[i]);
		d[a[i]]=false;
	}
	for(int i=0;i<n;i++){
		d[a[i]]=true;
	}
	int dem=0;
	for(int i=l;i<=r;i++){
		if(d[i]==false) dem++; 
	}
	cout<<dem<<endl;
		/*sort(a,a+n);
		cout<<a[n-1]-a[0]+1-n<<endl;*/
	}
	return 0;

