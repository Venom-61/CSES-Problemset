#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Ferris Wheel

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());
    // 2 3 7 9

    int l = 0, ans = 0;
    for(int r = n - 1; r >= l; r--) {
        if(a[r] + a[l] <= k) 
            l++;
        ans++;
    }
    cout << ans << "\n";

    return 0;
}
