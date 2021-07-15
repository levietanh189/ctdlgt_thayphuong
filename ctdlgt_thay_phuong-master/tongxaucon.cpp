#include<iostream>
#include<string>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    string s;
    while (T--) {
        cin >> s;
        ll ans = 0;
        int n = s.length();
        ll a[20][20];
        for (int i = 0; i < n; ++i) {
            a[0][i] = (s[i]-'0');
            ans += a[0][i];
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n - i ; ++j) {
                a[i][j] = (a[i - 1][j] * 10 + a[i - 1][j + 1] % 10);
                ans+=a[i][j];
            }
        }
        cout << ans << endl;
    }
}
