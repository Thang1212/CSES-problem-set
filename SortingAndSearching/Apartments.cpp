#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int n, m, k, ans = 0, a[mxN], b[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> m >> k;

	for (int i = 0; i < n; ++i)
	    cin >> a[i];
	for (int i = 0; i < m; ++i)
	    cin >> b[i];

	sort(a, a + n);
	sort(b, b + m);

	for (int i = 0, j = 0; i < n; ++i) {
	    while (j < m && b[j] < a[i] - k)
	        ++j;
	    if (j < m && b[j] <= a[i] + k) {
	        ++ans;
	        ++j;
	    }
	}

	cout << ans;

	return 0;
}



