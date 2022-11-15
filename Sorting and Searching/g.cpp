#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Sum of Two Values

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        v.push_back({x, i+1});
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while(l < r) {
        if(v[l].first + v[r].first > m) {
            r--;
        } else if(v[l].first + v[r].first < m) {
            l++;
        } else {
            cout << v[l].second << " " << v[r].second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}
