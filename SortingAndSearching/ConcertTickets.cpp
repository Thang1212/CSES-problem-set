#include <bits/stdc++.h>
using namespace std;

#define ar array

int n, m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> m;

	set<ar<int, 2>> s;

	for (int i = 0; i < n; ++i) {
		int h;
		cin >> h;
		s.insert({h, i});
	}

	for (int i = 0; i < m; ++i) {
		int t;
		cin >> t;
		auto it = s.lower_bound({t + 1});

		if (it == s.begin()) 
			cout << "-1\n";
		else {
			--it;
			cout << (*it)[0] << "\n";
			s.erase(it);
		}
	}

	return 0;
}
