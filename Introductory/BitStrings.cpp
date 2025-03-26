#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int M = 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	ll s = 1;
	for (int i = 0; i < n; ++i) 
		s = (ll)(2 * s % M);
	cout << s;

	return 0;
}

