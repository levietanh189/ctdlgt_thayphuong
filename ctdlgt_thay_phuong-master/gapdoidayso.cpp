#include<bits/stdc++.h>

using namespace std ;

int main(){
	int z;
	cin>>z;
	while(z--){
		long long n , k ;
		cin>> n >> k;
		long long length = pow(2, n-1) ; 
		while(1){
			if(n == 1 )  {
				cout<<"1";
				break;
			}
			if(k==length){
				cout<< n ;
				break ;
			}
			if(k>length){
				k = 2 * length -  k ;
			}
			n--; length = length / 2 ;
		}
		cout<<endl;
	}
	return 0 ;
}
