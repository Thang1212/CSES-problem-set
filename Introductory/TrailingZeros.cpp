#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// Trailing zero in N! = 1 . 2 . 3 .... N
	// We split those numbers into prime number. Ex: 10 = 2 . 5
	// We know that trailing zeros is the number of times we can divide the result by 10
	// So we need to find how many 5^x (2 factors exist more than 5 so we just need to find 5)
	// We divide  
	
	int n;
	cin >> n;

	ll ans = 0;
	for (int i = 5; i <= n; i *= 5)
		ans += (ll)(n / i);

	cout << ans;

	return 0;
}

