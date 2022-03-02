#include <bits/stdc++.h>
using namespace std;

int n, w, Fopt = -100000005, a[1005], b[1005], c[1005], Xopt[1005] = {0}, check, weight, val;

void ktao()
{
    for(int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        b[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while(b[i] == 1 && i >= 1)
    {
        b[i] = 0;
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        b[i] = 1;
    }
}

void ktra()
{
    weight = 0; val = 0;
    for(int i = 1; i <= n; i++)
    {
        if(b[i])
        {
            weight += a[i];
            val += c[i];
        }
    }
    // cout << weight << endl;
    if(weight > w)
        return;
    if(val > Fopt)
    {
        Fopt = val;
        for(int i = 1; i <= n; i++)
        {
            Xopt[i] = b[i];
        }
    }
}

int main()
{
    cin >> n >> w;
    check = 1;
    ktao();
    while(check)
    {
        ktra();
        sinh();
    }
    cout << Fopt << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << Xopt[i] << " ";
    }
    cout << endl;
    return 0;
}
// 4 10
// 6 5 3 7
// 5 4 6 5
