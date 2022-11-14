#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Permutations

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
	cin >> n;
	if(n == 1)
		cout << 1 << "\n";
	else if(n == 2 or n == 3)
		cout << "NO SOLUTION\n";
	else {
		for(int i = n; i > 0; i--) 
            if(i % 2 ==1) 
                cout << i << " ";
		for(int i = n; i > 0; i--) 
            if(i % 2 ==0) 
                cout << i << " ";
		cout << "\n";
	}

    return 0;
}
