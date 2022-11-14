#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Number Sprial

void solve() {
    ll x, y;
    cin >> x >> y;
 
    if(x >= y) {
        if(x & 1) 
            cout << (x - 1) * (x - 1) + y << "\n";
        else 
            cout << x * x - y + 1 << "\n";
    } else {
        if(y & 1) 
            cout << y * y - x + 1 << "\n";
        else 
            cout << (y - 1) * (y - 1) + x << "\n";
    }
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
