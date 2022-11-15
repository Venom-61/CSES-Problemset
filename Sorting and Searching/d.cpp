#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Concert Tickets

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    multiset<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(-x);
    }
    
    // -8 -7 -5 -5 -3

    while(q--) {
        int x;
        cin >> x;
        auto it = s.lower_bound(-x);
        if(it != s.end()) {
            cout << -(*it) << "\n";
            s.erase(it);
        } else 
            cout << "-1\n";
    }
    
    return 0;
}
