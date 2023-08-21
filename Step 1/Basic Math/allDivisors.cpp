vector<int> printDivisors(int n) {
	// Write your code here
	vector<int>div;
	// Can use set also in place of vector

	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			div.push_back(i);
			if (n / i != i) {
				div.push_back(n / i);
			}
		}
	}

	sort(div.begin(), div.end());
	// for(auto x: div) {cout<<x<<" ";}

	return div;
}