#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Collecting Numbers II

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), ind(n + 1);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ind[x] = i;
        a[i] = x;
    }

    int ans = 1, l = 1;
    for(int i = 1; i <= n; i++) {
        if(l > ind[i])
            ans++;
        l = ind[i];
    }

    while(m--) {
        int x, y;
        cin >> x >> y;
        int r = a[x], s = a[y];
        swap(a[x], a[y]);

        if(ind[r-1] <= ind[r] and ind[r-1] > y)
            ans++;
        if(ind[r-1] > ind[r] and ind[r-1] <= y)
            ans--;
        if(ind[r] <= ind[r+1] and y > ind[r+1])
            ans++;
        if(ind[r] > ind[r+1] and y <= ind[r+1])
            ans--;
        ind[r] = y;

        if(ind[s-1] <= ind[s] and ind[s-1] > x)
            ans++;
        if(ind[s-1] > ind[s] and ind[s-1] <= x)
            ans--;
        if(ind[s] <= ind[s+1] and x > ind[s+1])
            ans++;
        if(ind[s] > ind[s+1] and x <= ind[s+1])
            ans--;
        ind[s] = x;

        cout << ans << "\n";
    }


    return 0;
}
