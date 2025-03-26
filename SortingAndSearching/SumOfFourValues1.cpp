#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 1e3;

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

	for (int i = 0; i < n - 3; ++i) {
		int x2 = x - a[i][0];

		for (int j = i + 1; j < n - 2; ++j) {
			int x3 = x2 - a[j][0];

			for (int k = j + 1, l = n - 1; k < l; ++k) {
				while (k < l && a[k][0] + a[l][0] > x3)
					--l;
				if (k < l && a[k][0] + a[l][0] == x3) {
					cout << a[i][1] + 1 << " " << a[j][1] + 1 << " " << a[k][1] + 1 << " " << a[l][1] + 1;
					return 0;
				}
			}
		}
	}

	cout << "IMPOSSIBLE";

	return 0;
}



