#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	set<int> s;

	auto it = s.lower_bound(1);

	cout << "index value: " << *it << "\n";
	cout << "s begin() value: " << *s.begin() << "\n";


	return 0;
}



