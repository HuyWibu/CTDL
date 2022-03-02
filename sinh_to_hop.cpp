#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005], check;

void ktao()
{
    for(int i=1 ; i<=k ; i++)
        a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n-k+i && i>=1)
    {
        i--;
    }
    if(i==0)
    {
        check = 0;
    }
    else
    {
        int x = ++a[i];
        for(int j = i ; j<=k ; j++)
            a[j] = x++;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ktao();
        check = 1;
        while(check)
        {
            for(int i=1 ; i<=k ; i++)
                cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}