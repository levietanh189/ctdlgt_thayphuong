#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[m+n+1];
        for(int i=0;i<m+n;i++){
            cin>>a[i];
        }
        sort(a,a+m+n);
        cout<<a[k-1]<<endl;
    }
    return 0;
}
