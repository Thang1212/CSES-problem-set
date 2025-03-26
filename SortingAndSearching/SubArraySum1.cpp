#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN = 2e5;
int n, a[mxN];
ll x;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif
 
	cin >> n >> x;
 
	map<ll, int> mp;
	++mp[0];
	ll ans = 0, s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s += (ll)a[i];
		ans += (ll) mp[s-x];
		++mp[s];
	}
	cout << ans;

	return 0;
}



