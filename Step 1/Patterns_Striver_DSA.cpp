#include <bits/stdc++.h>
using namespace std;

void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void print1(int n) {
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			cout << '*' << " ";
		}
		cout << '\n';
	}
}

void print2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << '\n';
	}
}

void print3(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << '\n';
	}
}

void print4(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << '\n';
	}
}

void print5(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << "* ";
		}
		cout << '\n';
	}
}

void print6(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << j << " ";
		}
		cout << '\n';
	}
}

void print7(int n) {
	for (int i = 0; i < n; i++) {
		// printing the spaces first
		int space = n - i - 1;
		while (space > 0) {
			cout << " ";
			space--;
		}

		// printing '*' in each row
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << '*';
		}

		// space
		space = n - i - 1;
		while (space > 0) {
			cout << " ";
			space--;
		}

		//moving on to next row
		cout << '\n';
	}
}

void print8(int n) {
	for (int i = 1; i <= n; i++) {

		// printing space
		int space = i - 1;
		while (space > 0) {
			cout << " ";
			space--;
		}

		//printing '*' in each row
		for (int j = 0; j < 2 * (n - i) + 1; j++) {
			cout << '*';
		}

		cout << '\n';
	}
}

void print9(int n) {
	// above triangle

	for (int i = 1; i <= n; i++) {
		int space = n - i;
		while (space > 0) {
			cout << " ";
			space--;
		}

		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}

		cout << '\n';
	}

	// lower triangle

	for (int i = 0; i < n; i++) {
		int space = i;
		while (space > 0) {
			cout << " ";
			space--;
		}

		for (int j = 1; j <= n - i; j++) {
			cout << "* ";
		}
		cout << '\n';
	}
}

void print10(int n) {
	// upper triangle
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << '\n';
	}


	// lower triangle
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "* ";
		}
		cout << '\n';
	}
}

// Do check how we are updating the pattern
void print11(int n) {
	for (int i = 1; i <= n; i++) {
		int no = 1;
		if (i % 2 == 0) no = 0;
		for (int j = 1; j <= i; j++) {
			cout << no << " ";
			no = 1 - no;
		}

		cout << '\n';

	}
}

// carefully observe the spaces
void print12(int n) {
	for (int i = 1; i <= n; i++) {
		// no
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}

		// space
		for (int j = 1; j <= 2 * (n - i); j++) {
			cout << "  ";
		}

		//no
		for (int j = i; j >= 1; j--) {
			cout << j << " ";
		}

		cout << '\n';
	}
}

void print13(int n) {
	int count = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << count << " ";
			count++;
		}
		cout << '\n';
	}
}

void print14(int n) {
	for (int i = 1; i <= n; i++) {
		char start = 'A';
		for (int j = 1; j <= i; j++) {
			cout << start;
			start++;
		}
		cout << '\n';
	}

	//  for (int i = 0; i < n; i++) {
	// 	for (char j = 'A'; j <= 'A' + i; j++) {
	// 		cout << j;
	// 	}
	// 	cout << '\n';
	// }
}

void print15(int n) {
	for (int i = 0; i < n; i++) {
		char start = 'A';
		for (int j = 1; j <= n - i; j++ ) {
			cout << start;
			start++;
		}
		cout << '\n';
	}
}

void print16(int n) {
	char ch = 'A';
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << ch;
		}
		ch++;
		cout << '\n';
	}
}

// see a better approach by going ahead one step at a time
void print17(int n) {

	for (int i = 1; i <= n; i++) {
		//space
		int space = n - i;
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		// 	//letters
		char ch = 'A';
		for (int j = 1; j <= 2 * i - 1; j++) {
			// if (j > i) {
			// 	cout << ch;
			// 	ch--;
			// }
			// else {
			// 	cout << ch;
			// 	ch++;
			// 	if (j == i) {
			// 		ch -= 2;
			// 	}
			// }

			//better approach
			cout << ch;
			if (j < i) {
				ch++;
			}
			else {
				ch--;
			}

		}
		cout << '\n';

	}
}

//two similar though interesting questions
void print18(int n) {

	//first problem
	// for (int i = 1; i <= n; i++) {
	// 	char ch = 'A' + n - 1;
	// 	for (int j = 1; j <= i; j++) {
	// 		cout << ch << " ";
	// 		ch--;
	// 	}
	// 	cout << '\n';
	// }

	//second pattern
	for (int i = 1; i <= n; i++) {
		char ch = 'A' + n - i;
		for (int j = 1; j <= i; j++) {
			cout << ch << " ";
			ch++;
		}
		cout << '\n';
	}
}

// symmetry1
void print19(int n) {

	//upper half
	for (int i = 1; i <= n; i++) {
		//stars
		for (int j = 1; j <= n - i + 1; j++) {
			cout << '*';
		}
		//spaces
		int space = 2 * (i - 1); // if i had been from 0 to n, then space=2*i
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		//stars
		for (int j = 1; j <= n - i + 1; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	//lower half
	for (int i = 1; i <= n; i++) {
		//stars
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		//spaces
		int space = 2 * (n - i);
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		//stars
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		cout << '\n';
	}

}

// symmetry2
void print20(int n) {

	//upper half
	for (int i = 1; i <= n; i++) {
		//stars
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		//spaces
		int space = 2 * (n - i);
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		//stars
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}

		cout << '\n';
	}

	// lower half
	for (int i = 1; i < n; i++) {
		//stars
		for (int j = 1; j <= n - i; j++) {
			cout << '*';
		}
		//spaces
		int space = 2 * i;
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		//stars
		for (int j = 1; j <= n - i; j++) {
			cout << '*';
		}
		cout << '\n';
	}
}

// Check for alter solution
void print21(int n) {

	//first line
	// for (int i = 1; i <= n; i++) {
	// 	cout << '*';
	// }
	// cout << '\n';

	// // middle part
	// for (int i = 1; i <= n - 2; i++) {
	// 	cout << '*';
	// 	for (int j = 1; j <= n - 2; j++) {
	// 		cout << " ";
	// 	}
	// 	cout << '*';
	// 	cout << '\n';
	// }

	// //last line
	// if (n > 1) {
	// 	for (int i = 1; i <= n; i++) {
	// 		cout << '*';
	// 	}
	// }

	// Better and clear approach
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n ) {
				cout << '*';
			}
			else {
				cout << " ";
			}
		}
		cout << '\n';
	}
}

// approach will blow your mind
void print22(int n) {
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {

			/* first convert the matrix by subtracting it from 4. It will now show the min-distance
				from the border/edge. This is our main approach. To convert it back we use the
				following logic:

				4 - arr = new_arr  => arr = 4 - new_arr : This is what we are printing out.
			*/

			int left = j;
			int right = 2 * n - 2 - j;
			int top = i;
			int bottom = 2 * (n - 1) - i;
			cout << n - min(min(left, right), min(top, bottom));

		}
		cout << '\n';
	}
}

int main() {
	init();

	int n;
	cin >> n;

	print22(n);

	return 0;
}
