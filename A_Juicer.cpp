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
    int n, b, d, cnt = 0;
    ll sum = 0;
    cin >> n >> b >> d;
    int a[n];
    cin(a) for (int i = 0; i < n; i++)
    {
        if (a[i] <= b)
        {
            sum += a[i];
        }
        if (sum > d)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    fast
    solve();
    return 0;
}