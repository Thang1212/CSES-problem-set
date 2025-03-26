#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int n, x, ans = 0, p[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
		cin >> p[i];

	sort(p, p + n);

	for (int i = 0, j = n - 1; i < n; ) {
		while (i < j && p[i] + p[j] > x)
			--j;
		if (i >= j)
			break;
		++ans;
		++i;
		--j;
	}

	cout << n - ans;

	return 0;
}



