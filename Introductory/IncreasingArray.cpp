#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, mx = 0;
	cin >> n;

	ll ans = 0;
	while (n--) {
		int a;
		cin >> a;
		mx = max(mx, a);
		ans += (ll)(mx - a);
	}

	cout << ans;

	return 0;
}

