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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < n - 3; i++)
    {
        if (s[i + 3] == 'b' || s[i + 3] == 'c' || s[i + 3] == 'd')
        {
            v.push_back(s[i]);
            v.push_back(s[i + 1]);
            v.push_back(s[i + 2]);
            v.push_back('.');
            i += 2;
        }
        else if (s[i + 3] == 'a' || s[i + 3] == 'e')
        {
            v.push_back(s[i]);
            v.push_back(s[i + 1]);
            v.push_back('.');
            i++;
        }
    }
    if (s[n - 1] == 'b' || s[n - 1] == 'c' || s[n - 1] == 'd')
    {
        v.push_back(s[n - 3]);
        v.push_back(s[n - 2]);
        v.push_back(s[n - 1]);
    }
    else if (s[n - 1] == 'a' || s[n - 1] == 'e')
    {
        v.push_back(s[n - 2]);
        v.push_back(s[n - 1]);
    }
    for (char x : v)
    {
        cout << x;
    }
    cout << endl;
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}