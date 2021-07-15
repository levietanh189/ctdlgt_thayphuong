#include<iostream>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        stack<int> s;
        int n,i=0;
        long long max=0,temp=0;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        while(i<n){
            if(s.empty() || a[s.top()] <= a[i]){
                s.push(i++);
            }
            else{
                int highest=s.top();
                s.pop();
                long long edge=(s.empty()? i:i-s.top()-1);
                temp=a[highest]* edge;
                if(temp>max) max=temp;
            }
        }
        while(!s.empty()){
            int highest=s.top();
                s.pop();
                long long edge=(s.empty()? i:i-s.top()-1);
                temp=a[highest]* edge;
                if(temp>max) max=temp;
        }
        cout<<max<<endl;
    }
}
