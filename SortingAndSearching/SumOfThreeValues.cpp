#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 5e3;
int n, x;
ar<int, 2> a[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
		cin >> a[i][0], a[i][1] = i;
	sort(a, a + n);

	for (int i = 0; i < n - 2; ++i) {
		int x2 = x - a[i][0];

		for (int j = i + 1, k = n - 1; j < k; ++j) {
			while (j < k && a[j][0] + a[k][0] > x2)
				--k;
			if (j < k && a[j][0] + a[k][0] == x2) {
				cout << a[i][1] + 1 << " " << a[j][1] + 1 << " " << a[k][1] + 1;
				return 0;
			}
		}
	}

	cout << "IMPOSSIBLE";

	return 0;
}



