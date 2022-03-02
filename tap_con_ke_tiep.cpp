#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005], check;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int i = k;
        while (a[i] == n - k + i && i >= 1)
        {
            i--;
        }
        if (i == 0)
        {
            int x = n;
            for(int j=1 ; j<=k ; j++)
                cout << j << " ";
            cout << endl;
        }
        else
        {
            int x = ++a[i];
            for (int j = i; j <= k; j++)
            {
                a[j] = x++;
            }
            for(int j = 1 ; j<=k ; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}