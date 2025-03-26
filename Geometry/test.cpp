#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct P {
	int x, y;

	void read() {
		cin >> x >> y;
	}

	P operator - (const P& b) const {
		return P{x - b.x, y - b.y};
	}

	ll operator * (const P& b) const {
		return (ll) (x * b.y) - (y * b.x);
	}

	bool isTriangle(const P& b, const P& c) {
		if ((b - *this) * (c - *this))
			return true;
		else 
			return false;
	}
};

int main() {
	struct P p1, p2;

	cout << "Enter first point: ";
	p1.read();

	cout << "Enter second point: ";
	p2.read();

	ll cross_product = p1 * p2;

	cout << "Cross product: " << cross_product << "\n";

	return 0;
}
