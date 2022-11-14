#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;

// Missing Number
 
int main() {
	ll n;
	cin >> n;
	ll sum = 0;
	for (int i = 1; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
	}

	ll ans = n * (n + 1) / 2;
	cout << ans - sum << "\n";

    return 0;
}
