int countDigits(int n) {
	// Write your code here.
	int a = n;
	int count = 0;
	while (n > 0) {
		int d = n % 10;
		if (d != 0 && a % d == 0 ) {count++;}
		n /= 10;
	}

	return count;
}