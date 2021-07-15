#include<bits/stdc++.h>
using namespace std;
string s,b;

void nhap(){
	cin>>s;
}

void sinh(){
	b=s[0];
	for(int i=1;i<s.size();i++){
		int k=b.size()-1;
		if(b[k] != s[i]) b+="1";
		else b+="0";
	}
	cout<<b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		sinh();
		cout<<endl;
	}
}
