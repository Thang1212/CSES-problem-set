#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string t;
	cin >> t;

	int mx = 1;
	for (int i = 0, j = i + 1; i < (int)size(t) && j < (int)size(t); i = j, j = i + 1) {
		while (t[i] == t[j]) {
			mx = max(mx, j - i + 1);
			++j;
		}
	}

	cout << mx;

	return 0;
}

