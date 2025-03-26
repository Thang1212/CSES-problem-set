#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int x, y;
		cin >> y >> x;

		ll z1 = max(x, y);
		ll z2 = (z1 - 1) * (z1 - 1), ans = 0;

		if (z1 % 2) {
			if (z1 == y)
				ans = z2 + x;
			else 
				ans = z2 + 2 * z1 - y;
		} else {
			if (z1 == x)
				ans = z2 + y;
			else 
				ans = z2 + 2 * z1 - x;
		}

		cout << ans << "\n";
	}

	return 0;
}

