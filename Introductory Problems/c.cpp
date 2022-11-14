#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Repetitions

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
	cin >> s;
    int n = (int)s.size();

	int count = 0, max = 0;
	for (int i = 0; i < n - 1; ++i) {
		if(s[i] == s[i + 1]) {
			count++;
			if(count > max)
			    max = count;
		} else
			count = 0;
	}

	cout << max + 1 << "\n";  
    return 0;
}
