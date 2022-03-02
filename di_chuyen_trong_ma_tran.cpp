#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][105];
long long cnt;

bool check(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m && a[i][j]){
        return true;
    }
    return false;
}

void BT(int i, int j){
    if(i == n - 1 && j == m - 1){
        cnt++;
        // cout << s << endl;
        return;
    }
    if(check(i, j) == 0)
        return;
    BT(i + 1, j);
    BT(i, j + 1);
}

void Solve(){
    memset(a, 0, sizeof(a));
    cin >> n >> m;
    cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    BT(0, 0);
    cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}