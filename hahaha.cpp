#include <bits/stdc++.h>
using namespace std;

int n, check;
string s;

void ktao()
{
    for (int i = 0; i < n; i++)
        s += "H";
}

void sinh()
{
    int i = n - 1;
    while (s[i] == 'A' && i >= 0)
    {
        s[i] = 'H';
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        s[i] = 'A';
    }
}

bool ktra()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'H' && s[i + 1] == 'H')
            return 0;
    }
    return 1;
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
        s = "";
        cin >> n;
        ktao();
        string x[1000];
        int cnt = 0;
        check = 1;
        while (check)
        {
            if (s[0] == 'H' && s[n - 1] == 'A' && ktra() == 1)
            {
                x[cnt++] = s;
            }
            sinh();
        }
        sort(x, x+cnt, cmp);
        for (int i = 0; i < cnt; i++)
            cout << x[i] << endl;
    }
    return 0;
}