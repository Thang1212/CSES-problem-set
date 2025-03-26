#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	// Split two sets that have equal sum
	// Condition:
	// #1: sum of n must be even -> To split by two groups later
	// #2: if n is even -> We are easy to split (first, last) (next first, next last)
	// #3: if n is odd -> We need to keep the last number for later and split it like n is even
	// Why do we group (first, last)? -> This is the magical of number theory
	
	if (n * (n + 1) / 2 % 2) 
		cout << "NO";
	else {
		cout << "YES" << "\n";

		vector<int> first;
		vector<int> second;

		if (n % 2) {
			for (int i = 0; i < (n - 1) / 2; ++i) {
				if (i % 2) {
					second.push_back(i + 1);
					second.push_back(n - i - 1);
				} else {
					first.push_back(i + 1);
					first.push_back(n - i - 1);
				}

			}

			if (first.size() > second.size())
				second.push_back(n);
			else 
				first.push_back(n);

		} else {
			for (int i = 0; i < n / 2; ++i) {
				if (i % 2) {
					second.push_back(i + 1);
					second.push_back(n - i);
				} else {
					first.push_back(i + 1);
					first.push_back(n - i);
				}
			}
		}

		cout << first.size() << "\n";
		for (int i:first)
			cout << i << " ";

		cout << "\n" << second.size() << "\n";
		for (int i:second)
			cout << i << " ";
	}

	return 0;
}

