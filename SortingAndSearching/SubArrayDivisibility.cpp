#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	map<ll, int> mp;
	++mp[0];
	ll s = 0, ans = 0;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		s = (ll) (s + a % n + n) % n;
		ans += (ll) mp[s];
		++mp[s];
	}

	cout << ans;

	return 0;
}

