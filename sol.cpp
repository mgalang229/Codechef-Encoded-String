#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int power(int a, int b) {
	int res=1;
	while(b) {
		if(b&1)
			res*=a;
		a*=a;
		b/=2;
	}
	return res;
}

char cnv(string s) {
	int tmp=stoi(s);
	int rem=0, d=0;
	for(int i=0; tmp!=0; ++i) {
		rem=tmp%10;
		tmp/=10;
		d+=rem*power(2, i);
	}
	return char(d+97);
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string tmp="";
	//take every four characters of the string and convert it from binary to decimal
	//after conversion, add its corresponding character equivalent from the alphabet
	for(int i=0; i<n; i+=4)
		tmp+=cnv(s.substr(i, 4));
	cout << tmp << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
