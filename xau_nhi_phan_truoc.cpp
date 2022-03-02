#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    scanf("\n");
    while(t--)
    {
        string s;
        cin >> s;
        int i = s.size() - 1;
        while(s[i] == '0' && i>=0)
        {
            s[i] = '1';
            i--;
        }
        if(i<0)
        {   
            cout << s << endl;
        }
        else
        {
            s[i] = '0'; 
            cout << s << endl;
        }
       
    }
        
    return 0;
}