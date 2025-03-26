#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e6, M = 1e9 + 7;

int n;
// dp[i]: count the number of ways to build number i
ll dp[mxN+1];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  #ifndef ONLINE_JUDGE
  freopen("_input.txt", "r", stdin); 
  freopen("_output.txt", "w", stdout);
  #endif

	cin >> n;

	// dp[0] is the start, if i = 2 and throw dice 2 -> i - j = 0 -> +1
	dp[0] = 1;

	// i: build and count the number of ways to make i
	// j: is a possible dice
	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= min(6, i); ++j) 
			dp[i] = (dp[i] + dp[i-j]) % M;
			// dp[i]: add on continuously the number of way
			// i-j: the previous number that can build number i
		

	cout << dp[n];

	return 0;
}

