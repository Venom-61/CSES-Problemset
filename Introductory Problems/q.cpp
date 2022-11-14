#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;

// Chessboard and Queens
 
const int N = 8;
const int D = 2 * N - 1;
 
string board[N];
bool diag1[D], diag2[D], col[N];
int ans = 0;
 
void search(int r) { // place Q in r-th row
    if(r == N) { // found valid placement
        ++ans;
        return ;
    }
    for(int c = 0; c < N; ++c) {
        if(board[r][c] == '*' or col[c] or diag1[c + r] or diag2[c - r + N - 1]) 
            continue;
 
        col[c] = diag1[c + r] = diag2[c - r + N - 1] = true;
        search(r + 1);
        col[c] = diag1[c + r] = diag2[c - r + N - 1] = false;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 0; i < N; ++i) {
        cin >> board[i];
    }
    search(0);
    cout << ans << "\n";
 
    return 0;
}
