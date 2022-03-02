#include <bits/stdc++.h>
using namespace std; 

int n, a[12][12];
bool possible = 0;

void BT(int i, int j, string s){
    if(i == n - 1 && j == n - 1){
        cout << s << " ";
        possible = 1;
        return;
    }
    if(a[i + 1][j]){
        BT(i + 1, j, s + "D");
    }
    if(a[i][j + 1]){
        BT(i, j + 1, s + "R");
    }
}

void Solve(){
    memset(a, 0, sizeof(a));
    possible = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    if(a[0][0] == 0 || a[n - 1][n - 1] == 0){
        cout << -1 << endl;
        return;
    }
    BT(0, 0, "");
    if(possible == 0) cout << -1;
    cout << endl;
} 

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}