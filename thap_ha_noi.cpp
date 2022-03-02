#include <bits/stdc++.h>
using namespace std;

void thap_HN(int n, char a, char b, char c){
    if(n == 1){
        cout << a << " -> " << c << endl;
        return; 
    }
    thap_HN(n - 1, a, c, b); // a la nguon c la trung gian b la dich
    thap_HN(1, a, b, c);
    thap_HN(n - 1, b, a, c);
}

int main(){
    char a = 'A', b = 'B', c = 'C';
    int n; cin >> n;
    thap_HN(n, a, b, c);
    return 0;
}