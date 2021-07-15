#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[10001]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        cout<<b[0]<<endl;
    }
    return 0;
}
