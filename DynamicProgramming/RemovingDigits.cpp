#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e6;
int n;
// Count, construct, if number n, dp[n]: how many ways optimal minus
ll dp[mxN+1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		dp[i] = (ll) 1e9;
		int i2 = i;

		while (i2) {
			dp[i] = min(dp[i], dp[i-i2%10] + 1);
			i2 /= 10;
		}

		// dp[i-i2%10]: n after first minus the approriate digit, this will find 
		// next number 
	}
	
	cout << dp[n];

	return 0;
}



