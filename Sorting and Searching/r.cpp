#include<bits/stdc++.h>
using namespace std;

// Policy-based data structures

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class T> using indexed_set =  tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

// Nested Ranges Check

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<array<int, 3>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }

    sort(a.begin(), a.end(), [&](auto x, auto y){
        return ((x[0] < y[0]) or (x[0] == y[0] and x[1] > y[1]));
    });

    vector<int> aa(n), bb(n);
    indexed_set<pair<int, int>> b, c;
    for(int i = 0, j = n-1; i < n; i++,j--) {
        aa[a[j][2]] = c.order_of_key({a[j][1]+1, -1}) ;
        c.insert({a[j][1], i});
    }
    
    for(int i = 0; i < n; i++){
        bb[a[i][2]] = i - b.order_of_key({a[i][1], -1});
        b.insert({a[i][1], i});
    }

    for(auto x : aa) {
        if(x > 0) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << endl;
    for(auto x : bb) {
        if(x > 0) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << endl;

    return 0;
}
