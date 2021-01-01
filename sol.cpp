#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

char Extract(string s) {
	int tmp = stoi(s);
	int rem = 0;
	int d = 0;
	for (int i = 0; tmp != 0; i++) {
		rem = tmp % 10;
		tmp /= 10;
		d += rem * Power(2, i);
	}
	return char(d + 97);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string tmp = "";
		// take every four characters of the string and convert it from binary to decimal
		// after conversion, add its corresponding character equivalent from the alphabet
		for (int i = 0; i < n; i += 4) {
			tmp += Extract(s.substr(i, 4));
		}
		cout << tmp << '\n';
	}
	return 0;	
}
