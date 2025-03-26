#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 100, mxX = 1e6, M = 1e9 + 7;
int n, x, c[mxN];
// Construct from scratch, count how may ways, if i money -> dp[i] ways
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

	// if i = c[j] -> i - c[j] = 0 -> same money and same coin -> add on
	dp[0] = 1;
	for (int i = 1; i <= x; ++i) 
		for (int j = 0; j < n; ++j)
			if (c[j] <= i)
				dp[i] = (dp[i] + dp[i-c[j]]) % M;
				// dp[i]: help add on
				// i - c[j]: to find more ways
				// dp[i-c[j]]: there will be 2 cases
				// if dp[i-c[j]] = 0 doesn't exist, so plus in don't matter
				// else exist, so we can have more ways

	cout << dp[x];

	return 0;
}



