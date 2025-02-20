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
    if (n < 10)
        cout << n << endl;
    else if (n % 9 == 0)
    {
        cout << n + (n / 9) - 1 << endl;
    }
    else
    {
        n = n / 0.9;
        cout << n << endl;
    }
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}