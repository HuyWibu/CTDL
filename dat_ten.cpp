#include <bits/stdc++.h>
using namespace std;

int n, k, check;
int a[1005];
string x[10005];

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 64 + i;
    }
}

void sinh()
{
    int i = k;
    while (a[i] == 64 + n - k + i && i >= 1)
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        int x = ++a[i];
        for (int j = i; j <= k; j++)
        {
            a[j] = x++;
        }
    }
}

bool cmp(string a, string b)
{
    return a < b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int cnt = 0;
        cin >> n >> k;
        ktao();
        check = 1;
        while (check)
        {
            s = "";
            for (int i = 1; i <= k; i++)
            {
                s += (char)a[i];
            }
            x[cnt++] = s;

            sinh();
        }
        sort(x, x + cnt, cmp);
        for (int i = 0; i < cnt; i++)
            cout << x[i] << endl;
    }
    return 0;
}