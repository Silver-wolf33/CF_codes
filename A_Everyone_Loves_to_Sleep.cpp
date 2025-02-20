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
    int n, h, m, rem = INT_MAX;
    cin >> n >> h >> m;
    int a[n], b[n];
    int d = h * 60 + m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = a[i] * 60 + b[i];
        if (a[i] == h && b[i] == m)
        {
            rem = 0;
            break;
        }
        int tmp = x - d;
        if (tmp >= 0)
        {
            if (tmp < rem)
            {
                rem = tmp;
            }
        }
        else
        {
            tmp = 1440 - d + x;
            if (tmp < rem)
            {
                rem = tmp;
            }
        }
    }
    cout << rem / 60 << " " << rem % 60 << endl;
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}