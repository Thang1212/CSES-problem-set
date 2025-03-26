#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

int main() {
	int x1, y1, x2, y2;

	cout << "Enter first point: ";
	cin >> x1 >> y1;

	cout << "Enter second point: ";
	cin >> x2 >> y2;

	cout << "\n--------------------\n";

	int cross_product = x1 * y2 - x2 * y1;

	if (cross_product == 0)
		cout << "1"; 
	else 
		cout << "0";

	cout << "\n--------------------\n";

	double OA = sqrt(pow(x1, 2) + pow(y1, 2));
	double OB = sqrt(pow(x2, 2) + pow(y2, 2));
	double AB = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));

	cout << "OA length: " << OA << "\n";
	cout << "OB length: " << OB << "\n";
	cout << "AB length: " << AB << "\n";
	cout << "\nSquare length of the longest edge: " << pow(max({OA, OB, AB}), 2) << "\n\n";


	return 0;
}
