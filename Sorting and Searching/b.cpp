#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Apartments

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++) {
        while(j < m and b[j] < a[i] - k)
            j++;
        if(j < m and (a[i] - k <= b[j] and b[j] <= a[i] + k)) {
            ans++;
            j++;
        }  
    }
    
    cout << ans << "\n";

    return 0;
}
