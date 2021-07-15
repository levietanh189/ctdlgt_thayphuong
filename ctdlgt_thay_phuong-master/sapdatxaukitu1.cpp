#include <bits/stdc++.h> 

using namespace std;

int main() { 
	int z;
	cin>>z;
	while(z--){
		string s;
		cin>>s;
		int a[10000]={0} ;
		int b = 0;
		for(int i=0;i<s.size();i++){
			a[s[i]]++;
			if(b<a[s[i]]){
				b = a[s[i]] ;
			}
		}
		if(b <= s.size() - b && s.size()%2==0){
			cout<<"1" ;
		}
		else if(b <= (s.size()/2+1) && s.size() %2 !=0){
			cout<<"1" ;
		}
		else{
			cout<<"-1" ;
		}
		cout<<endl;
	}
    return 0;
}
