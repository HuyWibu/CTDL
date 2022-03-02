#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, a[100], cnt=0;
        cin >> n >> k;
        set<int> s;
        for(int i=1 ; i<=k  ; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k;
        while(a[i] == n-k+i && i>=1)
        {
            i--;
        }
        if(i==0)
        {
            cout << k << endl;
        }
        else
        {
            int x = ++a[i];
            for(int j=i ; j<=k ; j++)
            {
                a[j] = x++;
            }
            for(int j=1 ; j<=k ; j++)
            {
                if(s.count(a[j]) == 0)
                    cnt++;
            }
            cout << cnt << endl;
        }

    }
    return 0;
}