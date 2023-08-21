bool checkArmstrong(int n) {
	//Write your code here
	int a = n;
	int cnt = int(log10(n) + 1);

	// As n<=10^9, we can use long long.

	// Time complexity: O(log10(n)) => As the loop will iterate those many times as there are number of digits.

	long long sum = 0;
	while (n != 0) {
		int ld = n % 10;
		sum += pow(ld, cnt);
		n /= 10;
	}

	if (sum == a) return true;
	else return false;
}
