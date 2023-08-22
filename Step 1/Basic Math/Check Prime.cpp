bool isPrime(int n)
{
	// Write your code here.

	// Use simple approach of finding divisors and check the count at the end
	int cnt = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (n / i != i) {
				cnt++;
			}
		}
	}
	if (cnt == 2) return 1;
	else return 0;
}
