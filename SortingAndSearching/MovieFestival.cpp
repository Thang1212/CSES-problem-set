#include <bits/stdc++.h>
using namespace std;

#define ar array

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
		cin >> a[i][1] >> a[i][0];

	sort(a, a + n);

	int prev = 0, ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i][1] >= prev) {
			++ans;
			prev = a[i][0];
		}
	}

	cout << ans;

	return 0;
}



