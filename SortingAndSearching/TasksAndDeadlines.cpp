#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN = 2e5;
int n;
ar<int, 2> a[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> a[i][0] >> a[i][1];
	sort(a, a + n);

	ll ans = 0, prev = 0;
	for (int i = 0; i < n; ++i) {
		prev += (ll) a[i][0];
		ans += (ll) (a[i][1] - prev);
	}

	cout << ans;

	return 0;
}



