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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            cnt++;
            i += 2;
        }
        else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}