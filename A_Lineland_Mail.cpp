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
    int n, x, y;
    cin >> n;
    int a[n], mn[n], mx[n];
    cin(a)

        mx[0] = abs(a[0] - a[n - 1]);
    mn[0] = abs(a[0] - a[1]);
    mx[n - 1] = abs(a[n - 1] - a[0]);
    mn[n - 1] = abs(a[n - 1] - a[n - 2]);
    for (int i = 1; i < n - 1; i++)
    {
        mn[i] = min(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1]));
        mx[i] = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
    }
    for (int i = 0; i < n; i++)
    {
        cout << mn[i] << " " << mx[i] << endl;
    }
}
int32_t main()
{
    fast
    solve();
    return 0;
}