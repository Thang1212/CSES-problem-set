#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;
	
	vector<int> v;

	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;

		auto it = upper_bound(v.begin(), v.end(), k) - v.begin();
		if (it < (int)v.size())
			v[it] = k;
		else 
			v.push_back(k);
	}

	cout << (int)v.size();

	return 0;
}



