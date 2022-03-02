#include <bits/stdc++.h>
using namespace std;

int a[12], n;

void nhap()
{
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

void in(int n)
{
    cout << "[";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << a[n] << "]" << endl;
}

void DQ(int i)
{
    if(i == n)
        return;
    DQ(i + 1);
    in(i);
    for(int i = 0; i < n; i++)
        a[i] += a[i + 1];
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        nhap();
        DQ(0);
    }
    return 0;
}