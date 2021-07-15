#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,x;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        cin>>x;
        for(auto& i:a) if(i!=x) cout<<i<<" ";
        cout<<"\n";
}
