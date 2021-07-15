#include<bits/stdc++.h> 
using namespace std; 
int XauConChung(string a,string b) 
{ 
 	int aLength = a.size(); 
 	int bLength = b.size();
  	int B[aLength + 1][bLength + 1];
   	for(int i = 0; i <= aLength; i++) 
  		{ 
   			for(int j = 0; j <= bLength; j++)
    		{ 
			if(i == 0 || j == 0) 
			{ 
				B[i][j] = 0; 
			}
	 		else if(a[i - 1] == b[j - 1]) 
			{ 
				B[i][j] = 1 + B[i - 1][j - 1]; 
			}
	  		else if(a[i - 1] != b[j - 1]) 
			{ 
				B[i][j] = max(B[i - 1][j], B[i][j - 1]); 
			} 
			} 
		} 	  
	return B[aLength][bLength]; 
} 
	int main()
	{
	  	int t; 
		cin >> t; 
	   	while(t--) 
	    { 
			string a,b; 
	    	cin >>a>>b;
 			cout <<XauConChung(a,b) << endl; 
		}			  
	}
