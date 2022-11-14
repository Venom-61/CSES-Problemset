#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Increasing Array

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
	cin >> n;
    vector<ll> a(n);
	for(ll i = 0; i < n; i++) 
		cin >> a[i];
 
	ll ans = 0;
	for(ll i = 0; i < n-1; i++) {
		if(a[i] > a[i+1]) {
			ans += a[i] - a[i+1];
			a[i+1] = a[i];
		}
	}
	cout << ans << "\n"; 

    return 0;
}
