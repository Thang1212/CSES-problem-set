#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	ll msf = -1e9, ans = -1e9;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		msf = max((ll)x, (ll)(x + msf));
		ans = max(ans, msf);
	}

	cout << ans;

	return 0;
}



