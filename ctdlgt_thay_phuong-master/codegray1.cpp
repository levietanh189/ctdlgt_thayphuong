#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
int n, k;
void nhap() {
	cin >> n;
	k = pow(2, n);
}

void sinh(string s[]) {
	if (n > 1) {
		int m = 2;
		for (int i = 2; i <= n; i++) {
			int l = 1;
			for (int j = 1; j <= i; j++) l = l * 2;
			for (int j = 1; j <= m; j++) {
				s[l - j + 1] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			m = l;
		}
	}
	for (int i = 1; i <= k; i++) cout << s[i] << " ";
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		nhap();
		string s[k + 3];
		s[1] = "0";
		s[2] = "1";
		sinh(s);
		cout << endl;
	}
}
