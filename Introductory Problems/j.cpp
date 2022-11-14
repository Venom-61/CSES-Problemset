#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Trailing Zeros

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, ans = 0;
	cin >> n;
 
	while(n > 0) {
		n /= 5;
		ans += n;
	}
	cout << ans << "\n"; 

    return 0;
}
