#include <iostream>
using namespace std;

int main() {
	unsigned long long n1 = 0, n2 = 1, tmp
	int i1;
	cin >> i1;
	if (i1 < 2) cout << i1;
	else {
		for (int i = 2; i <= i1; i++) {
			tmp = n1 + n2;
			n1 = n2;
			n2 = tmp;
		}
		cout << n2;
	}
	return 0;
}