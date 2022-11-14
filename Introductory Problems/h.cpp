#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Two Sets

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    ll tot = n * (n + 1) / 2;
    if(tot % 2) {
        cout << "NO\n";
        return 0;
    }
 
    vector<int> a1, a2;
    tot = tot / 2;
    ll sum = 0; 
    for(ll i = n; i >= 1; i--) {
        if(sum + i <= tot) {
            sum += i;
            a1.push_back(i);
        } else {
            a2.push_back(i);
        }
    }
 
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
 
    cout << "YES\n";
 
    cout << a1.size() << "\n";
    for(auto x : a1) 
        cout << x << " ";
    cout << "\n";
 
    cout << a2.size() << "\n";
    for(auto x : a2) 
        cout << x << " ";
    cout << "\n";

    return 0;
}
