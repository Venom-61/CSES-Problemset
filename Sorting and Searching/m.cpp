#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Playlist

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    map<int, int> mp;

    int l = 1, ans = 0;
    for(int r = 1; r <= n; r++) {
        int x;
        cin >> x;
        if(mp[x]) {
            ans = max(ans, r-l);
            l = max(l, mp[x] + 1);
            mp[x] = r;
        } else {
            mp[x] = r;
            ans = max(ans, r-l+1);
        }
    }

    ans = max(n-l+1, ans);
    cout << ans << "\n";

    return 0;
}
