#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Creating Strings

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    vector<string> perms;
    sort(s.begin(), s.end()); // Always rember to sort
    do {
        perms.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
 
    cout << perms.size() << "\n";
    for(auto p : perms) {
        cout << p << "\n";
    }

    return 0;
}
