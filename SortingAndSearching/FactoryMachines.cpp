#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int n, t, k[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> n >> t;

    for (int i = 0; i < n; ++i)
        cin >> k[i];

    ll lb = 0, rb = 1e18;
    while (lb < rb) {
        ll mb = (rb + lb) / 2, s = 0;

        for (int i = 0; i < n; ++i)
            s += min((ll) mb / k[i], (ll)1e9);

        if (s >= t)
            rb = mb;
        else 
            lb = mb + 1;
    }

    cout << lb;

	return 0;
}



