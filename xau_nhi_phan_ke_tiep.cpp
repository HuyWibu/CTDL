#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int check = 1;
        int i = s.size() - 1;
        while(s[i] == '1' && i >= 0)
        {
            s[i] = '0';
            i--;
        }
        if(i < 0)
        {
            for(int j=0 ; j<s.size() ; j++)
                s[j] = '0';
        }
        else
        {
            s[i] = '1';
        }
        cout << s << endl;
    }

    return 0;
}