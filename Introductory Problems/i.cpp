#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

// Bit Strings

ll binpow(ll a, ll b) {
    if(b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if(b & 1) 
        return (res * res * a) % mod;
    else 
        return (res * res) % mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    cout << binpow(2, n) << "\n";

    return 0;
}
