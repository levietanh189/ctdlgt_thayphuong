#include <iostream>
using namespace std;

int main()
{
    int t, n, sum, max_sum;
    int a[100];
    cin>>t;
    for (int m = 1; m <= t; m++)
    {
        cin>>n;
        for (int l = 1; l <= n; l++)
        {
            cin>>a[l];
        }
        max_sum = a[1];
        for (int i = 1; i <= n; i++)
        {
            sum = 0;
            for (int k = i; k <= n; k++)
            {
                sum = sum + a[k];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }   
            }
        }
        cout<<max_sum<<endl;
    }
    return 0;
}
