#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+1],b[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++) cin>>b[i];
        int k=1;
        for(int i=1;i<n;i++){
            if(a[i]!=b[i]){
                k=i;
                break;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
