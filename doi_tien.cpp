#include <bits/stdc++.h>
using namespace std;

int n, S, a[100005], b[100005], k, check, sum;

void sinh(int k){
    int i = k;
    while(b[i] == n - k + i && i > 0){
        i--;
    }
    if(i <= 0){
        check = 1;
    }
    else{
        b[i] += 1;
        for(int j = i + 1; j <= k; j++){
            b[j] = b[j - 1] + 1;
        }
    }
}

int main(){
    cin >> n >> S;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        check = 0;
        for(int j = 1; j <= i; j++){
            b[j] = j;
        }
        while(check == 0){
            sum = 0;
            for(int j = 1; j <= i; j++){
                sum += a[b[j]];
            }
            if(sum == S){
                cout << i << endl;
                return 0;
            }
            sinh(i);
        }
    }
    cout << -1 << endl;
    return 0;
}