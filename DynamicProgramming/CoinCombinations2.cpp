#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 100, mxX = 1e6, M = 1e9 + 7;
int n, x, c[mxN];
ll dp[mxX+1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
		cin >> c[i];

	dp[0] = 1;
	// Distinct order of coins -> So just need to loop through each coin just once
	for (int i = 0; i < n; ++i)
		for (int j = 1; j <= x; ++j)
			if (c[i] <= j)
				dp[j] = (dp[j] + dp[j-c[i]]) % M;

	cout << dp[x];

	return 0;
}



