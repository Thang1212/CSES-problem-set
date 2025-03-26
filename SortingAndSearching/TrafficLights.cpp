#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("_input.txt", "r", stdin);
	freopen("_output.txt", "w", stdout);
	#endif

	cin >> x >> n;

	set<int> s;
	s.insert(0);
	s.insert(x);
	
	map<int, int> mp;
	mp[x] = 1;

	for (int i = 0; i < n; ++i) {
	    int p;
	    cin >> p;

	    auto it = s.lower_bound(p);
	    int rb = *it;
	    --it;
	    int lb = *it;
	    --mp[rb-lb];

	    if (!mp[rb-lb])
	        mp.erase(rb - lb);

	    s.insert(p);

	    ++mp[rb-p];
	    ++mp[p-lb];

	    cout << (--mp.end())->first << " ";
	}


	return 0;
}



