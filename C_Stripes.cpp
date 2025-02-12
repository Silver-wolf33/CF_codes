#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define cin(a)                  \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ll long long int
void solve()
{
    char s[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> s[i][j];
        }
    }
    int b = 0, r = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j] == 'R')
                r++;
            else
                continue;
        }
        if (r == 8)
        {
            cout << "R" << endl;
            break;
        }
        else
        {
            r = 0;
        }
    }
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (s[i][j] == 'B')
                b++;
            else
                continue;
        }
        if (b == 8)
        {
            cout << "B" << endl;
            break;
        }
        else
        {
            b = 0;
        }
    }
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}