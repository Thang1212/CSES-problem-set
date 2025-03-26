#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 1e3;
int n, x, a[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	unordered_map<int, ar<int, 2>> mp;
	mp.reserve(1<<22);
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (mp.find(x - a[i] - a[j]) != mp.end()) {
				ar<int, 2> u = mp[x-a[i]-a[j]];
				cout << i + 1 << " " << j + 1 << " " << u[0] + 1 << " " << u[1] + 1;
				return 0;
			}
		}

		for (int j = 0; j < i; ++j) 
			mp[a[i]+a[j]] = {i, j};
	}

	cout << "IMPOSSIBLE";

	return 0;
}



