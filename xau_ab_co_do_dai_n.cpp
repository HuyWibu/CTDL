#include <bits/stdc++.h>
using namespace std;

string s;
int n, check;

void ktao()
{
    for(int i=0 ; i<n ; i++)
        s += "A";
}

void sinh()
{
    int i = n-1;
    while(s[i] == 'B' && i>=0)
    {
        s[i] = 'A';
        i--;
    }
    if(i<0)
    {
        check = 0;
    }
    else
    {
        s[i] = 'B';
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        s = "";
        cin >> n;
        ktao();
        check = 1;
        while(check)
        {
           for(int i=0 ; i<n ; i++)
                cout << s[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}