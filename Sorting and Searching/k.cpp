#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Collecting Numbers

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> ind(n + 1);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ind[x] = i;
    }

    int ans = 1, l = 1;
    for(int i = 1; i <= n; i++) {
        if(l > ind[i])
            ans++;
        l = ind[i];
    }
    cout << ans << "\n";

    return 0;
}
