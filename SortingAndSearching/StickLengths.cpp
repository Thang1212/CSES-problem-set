#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int n, p[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> p[i];
	sort(p, p + n);

	int standardStick = p[n/2];
	ll ans = 0;
	for (int i = 0; i < n; ++i) 
		ans += abs(p[i] - standardStick);

	cout << ans;

	return 0;
}



