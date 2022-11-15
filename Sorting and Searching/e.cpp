#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Restaurant Customers

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());

    int curr = 0, ans = 0;
    for(auto p : v) {
        curr += p.second;
        ans = max(ans, curr);
    }
    cout << ans << "\n";

    return 0;
}
