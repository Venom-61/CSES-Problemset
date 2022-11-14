#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Two Knights

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // Total cells in a chess board
        ll t = i * i; 
 
        // Total combination of two places
        ll k = t * (t - 1) / 2; 
            
        // Total number of posibilities that 2 knights can attack each other
        if(i > 2) 
            k -= 4 * (i - 1) * (i - 2);
 
        // Total places will be k
        cout << k << "\n";
    }

    return 0;
}
