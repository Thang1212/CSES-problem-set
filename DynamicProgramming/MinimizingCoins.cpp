#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 100, mxX = 1e6;

int n, x, c[mxN]; 
// Build from scratch, if i money -> dp[i] will be optimal number of ways
ll dp[mxX+1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin); 
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	// We don't need to sort this array though
	for (int i = 0; i < n; ++i)
		cin >> c[i];

	for (int i = 1; i <= x; ++i) {
		// Assign to keep track, if exist, and able to use min 
		dp[i] = (ll)1e9;
		
		for (int j = 0; j < n; ++j)
			if (c[j] <= i)
				dp[i] = min(dp[i], dp[i-c[j]] + 1);
				// at the beginning dp[n] = 0, + 1 to add on continuosly
				// dp[i]: keep the optimal one
				// i - c[j]: check if there is ways exist, if don't -> dp[i-c[j]] > 1e9
	}

	dp[x] >= (ll)1e9 ? cout << -1 : cout << dp[x];

  return 0;
}

