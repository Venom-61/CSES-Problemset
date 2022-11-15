#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Distinct Numbers

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    set<ll> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";

    return 0;
}
