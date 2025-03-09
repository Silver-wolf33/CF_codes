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
    int a[n];
    cin(a)
        sort(a, a + n);

    ll q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        int l = 0, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= m)
                l = mid + 1;

            else
                r = mid;
        }
        cout << r << endl;
    }
}
int32_t main()
{
    fast
    solve();
    return 0;
}