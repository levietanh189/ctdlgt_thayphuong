#include<iostream>
#include<climits>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[1002],sum[1002];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long ans= INT_MIN;
        for (int i = 0; i < n; ++i) {
            sum[i] = a[i];
            for (int j = 0; j < i; ++j) {
                if (a[j] < a[i]) {
                    sum[i] = max(sum[i], sum[j] + a[i]);
                    
                }
            }
            if (sum[i] > ans) ans = sum[i];
        } cout << ans << endl;
    }
}
