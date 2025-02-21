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
    ll n, f, a, b, pre = 0;
    ll sum = 0;
    cin >> n >> f >> a >> b;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        x = (ar[i] - pre) * a;
        pre = ar[i];
        if (x < b)
            sum += x;
        else
            sum += b;
    }
    // cout << sum << endl;
    if (sum < f)
    {
        yes
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