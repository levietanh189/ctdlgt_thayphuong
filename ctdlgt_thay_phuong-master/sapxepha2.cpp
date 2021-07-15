#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int a[9],ans,gt[9][9];

bool check(int x, int y) {
    for (int i = 1; i < x; ++i) {
        if (a[i] == y || abs(a[i]-y) == abs(x-i)) return false;
    }
    return true;
}
void solve(int x) {
    for (int i = 1; i <= 8; ++i) {
        if (check(x, i)) {
            a[x] = i;
            if (x == 8) {
                int sum = 0;
                for (int k = 1; k <= 8; ++k) {
                    sum += gt[k][a[k]];
                }
                if (sum > ans) ans = sum;
            }
            solve(x + 1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        ans = 0;
        for (int i = 1; i <= 8; ++i) {
            for (int j = 1; j <= 8; ++j) cin >> gt[i][j];
        }
        solve(1);
        cout << ans << endl;
    }
}
