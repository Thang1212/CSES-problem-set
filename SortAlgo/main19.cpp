//Sliding Median
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int mxN = 2e5;
int n, k;
ll a[mxN];
ar<int, 2> med = {-1};
set<ar<int, 2>> bot, top;

void fix() {
	// k = 1 0 0
	// k = 2 0 1
	// k = 3 1 1
	int m = 1 + bot.size() + top.size();
	if (bot.size() < (m-1) / 2) {
		bot.insert(med);
		med = *top.begin();
		top.erase(med);
	}
	if (bot.size() > (m-1) / 2) {
		top.insert(med);
		med = *--bot.end();
		bot.erase(med);
	}
}

void add(ar<int, 2> x) {
	if (med[0] == -1) {
		med = x; 
		return;
	}
	if (x < med) 
		bot.insert(x);
	else 
		top.insert(x);
	fix();
}

void rem(ar<int, 2> x) {
	if (x == med) {
		med = *top.begin();
		top.erase(med);
	}
	else if (x < med) 
		bot.erase(x);
	else 
		top.erase(x);
	fix();
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; ++i) 
		cin >> a[i];

	if (k == 1) {
		for (int i = 0; i < n; ++i)
			cout << a[i] << " ";
		return 0;
	}

	for (int i = 0; i < k-1; ++i)
		add({(int)a[i], i});
	for (int i = k-1; i < n; ++i) {
		add({(int)a[i], i});
		cout << med[0] << " ";
		rem({(int)a[i-k+1], i-k+1});
	}

	return 0;
}
