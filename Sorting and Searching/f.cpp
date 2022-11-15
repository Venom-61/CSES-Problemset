#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Movie Festival

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end());

    int curr = -1, ans = 0;
    for(auto p : v) {
        if(p.second >= curr) {
            curr = p.first;
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}
