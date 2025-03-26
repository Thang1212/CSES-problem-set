#include <bits/stdc++.h>
using namespace std;

#define ar array

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	set<ar<int, 2>> s;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		s.insert({a, 1});
		s.insert({b, -1});
	}

	int ans = -1e8, msf = 0;
	for (ar<int, 2> p:s) {
		msf += p[1];
		ans = max(msf, ans);
	}
	
	cout << ans;

	return 0;
}

