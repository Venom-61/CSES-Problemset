#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Collecting Numbers

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v[x] = i;
    }

    int ans = 1;
    for(int i = 2; i <= n; i++) {
        if(v[i - 1] > v[i])
            ans++;
    }
    cout << ans << "\n";

    return 0;
}
