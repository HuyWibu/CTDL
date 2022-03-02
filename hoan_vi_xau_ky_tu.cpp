#include <bits/stdc++.h>
using namespace std;

int n, a[10005] = {0}, used[100] = {0};
map<int, char> m;
string s;

void ktao()
{
    cin >> s;
    n = s.size();
    int cnt = 1;
    for(int i = 0; i < s.size(); i++)
        m[cnt++] = s[i];
}

void kq()
{
    for(int i = 1; i <= n; i++)
        cout << m[a[i]];
    cout << " ";
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if(i == n)
                kq();
            else
                Try(i + 1);
            /// backtrack
            used[j] = 0;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ktao();
        Try(1);
        cout << endl;
    }
    return 0;
}