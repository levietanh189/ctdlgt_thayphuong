#include <bits/stdc++.h>
using namespace std;
int main() {
    int z; cin>>z;
    while(z--){
    	priority_queue <int, vector<int>, greater<int> > pr_qu ;
    	int n; cin>>n;
    	for(int i=0; i<n; i++){
    	    int x;
    		cin>>x;
    		pr_qu.push(x);
		}
		long sum=0;
		while(pr_qu.size()>1){
			int x=pr_qu.top(); pr_qu.pop();
			int y=pr_qu.top(); pr_qu.pop();
			sum +=x+y;
			pr_qu.push(x+y);
		}
		cout<<sum<<endl;  
		/* while(pr_qu.empty()==false){
			cout<<pr_qu.top()<<" ";
			pr_qu.pop(); 
		}	*/
    }
    return 0;
}
