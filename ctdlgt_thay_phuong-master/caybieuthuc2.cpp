#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;++i){
            cin>>s[i];
        }
        queue<int> q;
        for(int i=n-1;i>=0;--i){
            if(s[i]=="+" || s[i]=="-" || s[i]=="*" ||s[i]=="/"){
                int s1=q.front();
                q.pop();
                int s2=q.front();
                q.pop();
                int s3;
                if(s[i]=="+") s3=s2+s1;
                if(s[i]=="-") s3=s2-s1;
                if(s[i]=="*") s3=s2*s1;
                if(s[i]=="/") s3=s2/s1;
                q.push(s3);
            }
            else q.push(stoi(s[i]));
        }
        cout<<q.front()<<"\n";
    }
}
