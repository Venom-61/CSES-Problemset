#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;

// Weird Algorithm
 
int main() {
	ll n;
	cin >> n;
	while(n > 1) {
		cout << n << ' ';
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
	}
	cout << 1 << "\n";
}
