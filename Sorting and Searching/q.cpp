#include<bits/stdc++.h>
using namespace std;

// Policy-based data structures

#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef long long ll;

// Josephus Problem II

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    indexed_set s; 
    for(int i = 1; i <= n; i++)
        s.insert(i);

    int idx = k;
    while(s.size()) {
        idx %= s.size();
        int x = *s.find_by_order(idx);
        s.erase(x);
        cout << x << " ";
        idx += k;
    }


    return 0;
}
