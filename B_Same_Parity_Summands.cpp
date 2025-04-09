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
    int n, k;
    cin >> n >> k;
    int n1, n2;
    n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1)
    {
        cout << "YES" << endl;
        for (int i = 1; i < k; i++)
        {
            cout << 1 << " ";
        }
        cout << n1 << endl;
        return;
    }
    n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0)
    {
        cout << "YES" << endl;
        for (int i = 1; i < k; i++)
        {
            cout << 2 << " ";
        }
        cout << n2 << endl;
        return;
    }
    cout << "NO" << endl;
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}