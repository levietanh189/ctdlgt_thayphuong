#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[15], b[10000][15], n, test, cnt = 0;

void sinh(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        a[k] = i;
        if (k == n - 1)
        {
            int t = 0, check = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == 0)
                    t++;
                else
                {
                    if (t == test)
                        check++;
                    t = 0;
                }
            }
            if (t == test)
                check++;
            if (check == 1)
            {
                for (int j = 0; j < n; j++)
                    b[cnt][j] = a[j];
                cnt++;
            }
        }
        else
            sinh(k + 1);
    }
}

int main()
{
    cin >> n >> test;
    sinh(0);
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
                cout << 'A';
            else
                cout << 'B';
        }
        cout << endl;
    }
}
