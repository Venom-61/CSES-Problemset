#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Traffic Lights

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n;
    cin >> x >> n;

    // length of the road
    set<int> s;
    s.insert(0);
    s.insert(x);
    // 0 8 

    multiset<int> ms;
    ms.insert(x);
    // 8

    while(n--) {
        int a;
        cin >> a;
        auto it = s.lower_bound(a);
        auto it2 = it;
        --it2;

        ms.erase(ms.find(*it - *it2));
        ms.insert(a - *it2);
        ms.insert(*it - a);

        cout << *(--ms.end()) << "\n";
        s.insert(a);
    }
    return 0;
}
