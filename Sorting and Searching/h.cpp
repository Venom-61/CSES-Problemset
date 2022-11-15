#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Maximum Subarray Sum

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];

    ll curr = v[0], mx = v[0];
    for(int i = 1; i < n; i++) {
        curr = max(curr + v[i], v[i]);
        mx = max(mx, curr);
    }
    cout << mx << "\n";

    return 0;
}
