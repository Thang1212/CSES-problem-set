#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e3, M = 1e9 + 7;
int n;
string s[mxN];
// Count, construct as a table
// i x j: as a cell -> dp[i][j]: how many to get this cell
ll dp[mxN][mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> s[i];

	// We should count how many ways within the cell by
	// Ways dp[i][j] of the present cell = the upper cell + the left-er cell
	// Suppose (2, 3) meet (3, 2) at (3, 3) => So at that point there are 2 ways to go there 
	dp[0][0] = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (s[i][j] == '*')
				dp[i][j] = 0;
			else {
				// Prevent upper cell out of box
				if (i)
					dp[i][j] += dp[i-1][j];
				// Prevent left-er cell out of box
				if (j)
					dp[i][j] += dp[i][j-1];
				dp[i][j] %= M;
			}
		}
	}

	cout << dp[n-1][n-1];

	return 0;
}

