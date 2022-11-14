#include "bits/stdc++.h"
#include <typeinfo>
using namespace std;
 
typedef long long ll;

// Palindrome Reorder
 
void solve() {
	string s;
	cin >> s;
	map<char, int> mp;
	for(auto c : s) 
		mp[c]++;	
	
	bool ok = true;
	string str = "", odd = "";
	for(auto m : mp) {
		if(m.second % 2 == 0)
			for(int i = 0; i < m.second/2; i++) {
				str += m.first;
		} else {
			if(ok) {
				ok = false;
				for(int i = 0; i < m.second; i++) {
					odd += m.first;
				}
			} else {
				cout << "NO SOLUTION" << endl;
				return ;
			}
		}
	}
	
	string rev = str;
	reverse(rev.begin(), rev.end());
	string ans = str + odd + rev;
	cout << ans << endl;
}
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int tc = 1;
	// cin >> tc;
	while(tc--) {
		solve();
	}

	return 0;
}
