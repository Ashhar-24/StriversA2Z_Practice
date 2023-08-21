#include <bits/stdc++.h>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int countDigits(int n) {
	// Write your code here.
	int a = n;
	// saving the number into a dummy variable as the number gets updated.
	int count = 0;
	while (n > 0) {
		int d = n % 10;

		// As the number cant be divisible by 0, it becomes imp to check the edge case
		if (d != 0 && a % d == 0 ) {
			count++;
		}
		n /= 10;
	}

	return count;
}



int main() {
	init();

	int n; cin >> n;

	cout << countDigits(n);

	return 0;
}
