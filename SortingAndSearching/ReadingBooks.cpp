#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int n, t[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

    cin >> n;

    ll s = 0;
    for (int i = 0; i < n; ++i)
        cin >> t[i], s += (ll) t[i];
    sort(t, t + n);

    cout << max(s, (ll) 2 * t[n-1]);

	return 0;
}

