#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// check if 'n' is equal to 2, since this is the only number that has divisors
	// between the range of (0, 2) 
	if (n == 2) {
		cout << 2;
	} else {
		// otherwise, every number can be reduced to 1
		cout << 1;
	}
	cout << '\n';
	return 0; 
}
