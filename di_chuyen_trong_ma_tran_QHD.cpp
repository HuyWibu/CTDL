#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][105], dp[105][105];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        dp[1][1] = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i == 1 && j == 1)
                    continue;
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}