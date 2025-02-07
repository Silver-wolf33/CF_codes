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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (c < d)
    {
        int tmp = c;
        c = d;
        d = tmp;
    }
    if (c > a)
    {
        if (a > d && b < d)
            yes else no
    }
    else if (a > c)
    {
        if (c > b && d < b)
            yes else no
    }
    else
        no
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}
