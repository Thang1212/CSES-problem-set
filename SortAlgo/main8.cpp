//Traffic lights
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int mxN = 2e5;
int n, x, p[mxN];
map<int, int> mp;

int main() {
	cin >> x >> n;
	set<int> s;
	s.insert(0);
	s.insert(x);
	mp[x] = 1;
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
		auto it = s.lower_bound(p[i]);
		int r = *it;
		--it;
		int l = *it;
		--mp[r-l];
		if (!mp[r-l]) 
			mp.erase(r-l);
		s.insert(p[i]);
		++mp[r-p[i]];
		++mp[p[i]-l];
		cout << ((--mp.end())->first) << " ";
	}
}
