#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif	

	int n;
	set<int> x;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		x.insert(a);
	}
	
	cout << x.size();

	return 0;
}



