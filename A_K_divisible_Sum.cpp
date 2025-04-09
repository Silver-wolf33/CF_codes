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
    ll n, k, a, b;
    cin >> n >> k;
    if (n == 1)
    {
        cout << k << endl;
    }
    else if (n == k)
    {
        cout << 1 << endl;
    }
    else if (n < k)
    {
        a = k / n;
        b = k % n;
        if (b != 0)
            a++;
        cout << a << endl;
    }
    else
    {
        int c = n / k;
        int d = n % k;
        if (d != 0)
            c++;
        k *= c;
        a = k / n;
        b = k % n;
        if (b != 0)
            a++;
        cout << a << endl;
    }
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}