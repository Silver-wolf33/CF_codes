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
    string s;
    cin >> s;
    int n = s.size();

    bool foundAB = false, foundBA = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (!foundAB && s[i] == 'A' && s[i + 1] == 'B')
        {
            foundAB = true;
            i++;
        }
        else if (foundAB && s[i] == 'B' && s[i + 1] == 'A')
        {
            cout << "YES\n";
            return;
        }
    }

    foundAB = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (!foundBA && s[i] == 'B' && s[i + 1] == 'A')
        {
            foundBA = true;
            i++;
        }
        else if (foundBA && s[i] == 'A' && s[i + 1] == 'B')
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}
int32_t main()
{
    fast
    solve();
    return 0;
}