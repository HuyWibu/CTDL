#include <bits/stdc++.h>
using namespace std;

int n, a[100], check;

void ktao()
{
    int x = n;
    for(int i=1 ; i<=n ; i++)
    {
        a[i] = x--;
    }
}

void sinh()
{
    int i = n - 1;
    while(a[i] < a[i+1] && i>=1)
    {
        i--;
    }
    if(i==0)
    {
        check = 0;
    }
    else
    {
        int j = n; 
        while(a[i] < a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l<r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        ktao();
        check = 1;
        while(check)
        {
            for(int i=1 ; i<=n ; i++)
                cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}