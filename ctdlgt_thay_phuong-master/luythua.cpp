#include<bits/stdc++.h>
using namespace std;
#define e 1000000007

long long power(int a , int b){
	if( b == 1 ) return a ;
	long long temp = power(a,b/2);
	if( b %2 ==0) return temp*temp%e;
	else return a*(temp*temp%e)%e;
}

int main(){
	int z;
	cin>>z;
	for(int i=0;i<z;i++){
		int a;
		int b;
		cin>>a>>b;
		cout<< power(a,b)%e <<endl;
	}
	return 0;
}
