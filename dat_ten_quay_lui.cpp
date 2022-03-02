#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
vector<string> v;
set<string> st;

void nhap()
{
    cin >> n >> k; 
    v.push_back(" ");
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        st.insert(x);
    }
    for(auto x : st)
    {
        v.push_back(x);
    }
    n = st.size();
}

void kq()
{
    for(int i = 1; i <= k; i++)
    {
        cout << v[a[i]] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if(i == k)
            kq();
        else
            Try(i + 1);
    }
}

int main()
{
    nhap();
    Try(1);
    return 0;
}