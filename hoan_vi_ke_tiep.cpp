#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[10005];
        for(int i=1 ; i<=n ; i++)
            cin >> a[i];
        int i = n - 1;
        while(a[i] > a[i+1] && i >= 1)
        {
            i--;
        }
        if(i==0)
        {
            for(int i=1 ; i<=n ; i++)
                cout << i << " ";
            cout << endl;        
        }
        else
        {
            int j = n;
            while(a[i] > a[j])
            {
                j--;
            }
            swap(a[i], a[j]);
            sort(a + i + 1, a + n);
            for(int j = 1 ; j<=n ; j++)
                cout << a[j] << " ";
            cout << endl;
        }

    }
    return 0;
}