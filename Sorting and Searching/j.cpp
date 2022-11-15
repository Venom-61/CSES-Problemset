#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Missing Coin Sum

int32_t main() {
    int n; 
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin() , v.end());

    long long k = 1;
    for(int i = 0; i < n; i++) {
        if(k >= v[i]) {
            k += v[i];
            continue;
        }
        break;
    }
    cout << k <<"\n";

    return 0;
}
