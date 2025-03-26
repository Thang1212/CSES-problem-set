#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long 

int main() {
	int p[8];
	iota(p, p + 8, 0);

	cout << "first p value: ";
	for (int i = 0; i < 8; ++i)
		cout << p[i] << " ";
	cout << "\n\n";

	int ans = 1;
	do {
		cout << ans++ << " permutation: ";
		for (int i = 0; i < 8; ++i)
			cout << p[i] << " ";
		cout << "\n\n";
	} while(next_permutation(p, p + 8));
}
