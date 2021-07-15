#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

queue<string> q;
vector<string> a;
int n;
void solve() {
    q.push("6");
    q.push("8");
    while(q.front().size()<=n) {
        string s1 = q.front();
        q.pop();
        a.push_back(s1);
        string s2 = s1;
        q.push(s1.append("6"));
        q.push(s2.append("8"));
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        solve();
        cout << a.size() << "\n";
        for (auto& i : a) cout << i << " ";
        cout << endl;
        while (!q.empty()) q.pop();
        a.clear();
    }
}
