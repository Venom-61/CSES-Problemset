#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Stick Lengths

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end());

    int median = v[n/2];
    
    ll ans = 0;
    for(auto x : v) {
        ans += abs(median - x);
    }
    cout << ans << "\n";

    return 0;
}
