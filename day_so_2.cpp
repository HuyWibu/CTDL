#include <bits/stdc++.h>
using namespace std;

int a[12], b[10005], n, cnt;
stack<int> s;

void nhap()
{
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cnt = 0;
}

void in()
{
    int x = 1;
    int k;
    while(x <= n)
    {
        k = x;
        for(int i = 1; i <= x; i++)
        {
            b[k--] = s.top();
            s.pop();
        }
        cout << "[";
        for(int i = 1; i < x; i++)
        {
            cout << b[i] << " ";
        }
        cout << b[x] << "]" << " ";
        x++;
    }   
}

void push(int n)
{
    for(int i = 0; i < n; i++)
    {
        s.push(a[i]);
    }
    s.push(a[n]);
}

void DQ(int i)
{
    if(i < 0)
        return; 
    push(i);
    for(int j = 0; j < n; j++)
        a[j] += a[j + 1];
    DQ(i - 1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        nhap();
        DQ(n - 1);
        in();
        cout << endl;
    }
    return 0;
}