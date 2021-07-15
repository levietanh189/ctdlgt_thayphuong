#include<iostream>
#include<queue>
#include<vector>
#define mod 1000000000+7
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,tmp,sum=0;
        cin>>n;
        priority_queue<long long ,vector<long long>, greater<long long>> q;
        long x;
        while(n--){
            cin>>x;
            q.push(x);
        }
        while(q.size()>1){
            tmp=q.top();
            q.pop();
            tmp=(tmp+q.top());
            tmp%=mod;
            q.pop();
            q.push(tmp);
            sum +=tmp;
            sum%=mod;
        }
        cout<<sum<<endl;
    }
}
