#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    long a[1003];
    long Fi[1003];
    for (int i=1; i<=m; i++)
       { cin>>a[i];}
    a[0] = 0;
    Fi[0] = 0;
    for (int i=1; i<=m; i++)
    {
        Fi[i] = 1;
        for (int j=i-1; j>=1; j--)
        {
            if (a[i]>a[j])
            {
                Fi[i]=max(Fi[i], Fi[j]+1);
            }
        }
    }    
    	long dmax = 1;
    for (int i=1; i<=m; i++)
       {
	    if (Fi[i]>=dmax)
            dmax = Fi[i];
        }
    cout<<dmax;
    return 0;
}
