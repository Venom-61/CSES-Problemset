#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int n;
vector<int> apples;
 
ll solve(int i, ll sum1, ll sum2) {
    if(i == n) 
        return abs(sum1 - sum2);
 
    ll a = solve(i + 1, sum1 + apples[i], sum2);
    ll b = solve(i + 1, sum1, sum2 + apples[i]);
    return min(a, b);
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    apples.resize(n);
    for(int i = 0; i < n; ++i) 
        cin >> apples[i];
 
    cout << solve(0, 0, 0) << "\n"; 
 
    return 0;
}
