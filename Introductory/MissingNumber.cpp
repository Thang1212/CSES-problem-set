#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n, s = 0;
	cin >> n;

	for (int i = 0; i < n - 1; ++i) {
		int a;	
		cin >> a;
		s += (ll) a;
	}

	cout << n * (n + 1) / 2 - s;

	return 0;
}

