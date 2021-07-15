#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin>>n;
        map<int,int> b;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            ++b[a[i]];
            if(b[a[i]]==1) cout<<a[i]<<" ";
        }
}
