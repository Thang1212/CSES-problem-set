#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN = 2e5;
int n, k[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> k[i];

	map<int, int> mp;
	int ans = 0;
	for (int i = 0, j = 0; i < n; ++i) {
		while (j < n && mp[k[j]] < 1) {
			++mp[k[j]];
			++j;
		}

		ans = max(ans, j - i);
		--mp[k[i]];
	}

	cout << ans;

	return 0;
}



