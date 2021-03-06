#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct dta{
    int val,count;
};

bool cmp( dta a, dta b){
    if(a.count > b.count) return true;
    if(a.count == b.count && a.val< b.val) return true;
    return false;
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[100001]={0};
        dta a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].val;
            b[a[i].val]++;
        }
        
        for(int i=0;i<n;i++) a[i].count = b[a[i].val];
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i].val<<" ";
        cout<<endl;
    }
    return 0;
}
