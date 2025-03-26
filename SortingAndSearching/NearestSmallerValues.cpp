#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN = 2e5;
int n, x[mxN], prevIndex[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x[i];
		prevIndex[i] = i - 1;

		while (~prevIndex[i] && x[prevIndex[i]] >= x[i])
			prevIndex[i] = prevIndex[prevIndex[i]];
		cout << prevIndex[i] + 1 << " ";
	}

	return 0;
}



