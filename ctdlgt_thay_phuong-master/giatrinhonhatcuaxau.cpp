#include<iostream>
#include<map>
#include<queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        int k,tmp,ans=0;;
        cin>>k>>s;
        map<char,int> dp;
        priority_queue<int> q;
        for(auto& i:s) ++dp[i];
        for(auto& i:dp) q.push(i.second);
        while(k--){
            tmp=q.top();
            --tmp;
            q.pop();
            q.push(tmp);
        }
        while(!q.empty()){
            tmp=q.top();
            ans+=(tmp*tmp);
            q.pop();
        }
        cout<<ans<<endl;
    }
}
