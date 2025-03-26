#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	map<int, int> mp;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (mp.find(x - a) != mp.end()) {
			cout << mp[x-a] + 1 << " " << i + 1;
			return 0;
		}

		mp[a] = i;
	}

	cout << "IMPOSSIBLE";

	return 0;
}



