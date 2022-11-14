#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Coin Piles

void solve() {
    ll a, b;
	cin >> a >> b;
	if((a + b) % 3 != 0 or (a > 2*b) or (b > 2*a))
		cout << "NO\n";
	else 
		cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
