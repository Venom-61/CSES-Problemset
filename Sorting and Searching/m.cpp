#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Playlist

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) 
        cin >> a[i];

    map<int, int> mp;
    int l = 1, ans = 0;
    for(int r = 1; r <= n; r++) {
        l = max(mp[a[r]], l);
        ans = max(ans, r - l + 1);
        mp[a[r]] = r + 1;
    }

    cout << ans << "\n";
    return 0;
}
