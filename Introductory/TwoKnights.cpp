#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	cout << 0 << "\n";

	// Using counting rules in probability 
	
	// The number of places that they don't attack each other 
	// equal to
	// The number of places that they can be placed
	// minus for
	// The number of places that they can attacked each other
	
	// Ex: 4 x 4 chessboard 
	// So the 1st has 4^2 places to put 
	// And the 2nd need 4^2 - 1 places
	// But we need to eliminate all the swap cases -> divide them by 2
	
	// Imagine that knight can be moved two squares vertically and one square horizontally 
	// So we can count it in this way: (i - 2) * (i - 1) 
	// And there are 4 directions in the chessboard
	for (ll i = 2; i <= (ll)n; ++i)
		cout << i * i * (i * i - 1) / 2 - 4 * (i - 2) * (i - 1) << "\n";

	return 0;
}

