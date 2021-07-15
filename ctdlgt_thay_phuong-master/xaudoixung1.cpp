#include<iostream>
#include<cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int a[n][n];
        memset(a,0,sizeof(a));
        for(int i=1;i<n;++i){
            for(int j=0,h=i;h<n;++j,++h){
                a[j][h]= (s[j]==s[h])? a[j+1][h-1]:(min(a[j][h-1],a[j+1][h])+1);
            }
        }
        cout<<a[0][n-1]<<endl;
    }
}
