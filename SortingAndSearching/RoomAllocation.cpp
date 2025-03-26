#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 2e5;
int n, ans[mxN];
ar<int, 3> a[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[i][1] >> a[i][0];
		a[i][2] = i;
	}
	sort(a, a + n);

	set<ar<int, 2>> s;
	for (int i = 0; i < n; ++i) {
		auto it = s.lower_bound({a[i][1]});

		if (it != s.begin()) {
			--it;
			ans[a[i][2]] = (*it)[1];
			s.erase(it);
		} else
			ans[a[i][2]] = (int)s.size();

		s.insert({a[i][0], ans[a[i][2]]});
	}

	cout << (int)s.size() << "\n";
	for (int i = 0; i < n; ++i)
		cout << ans[i] + 1 << " ";

	return 0;
}
