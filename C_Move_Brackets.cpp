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
    vector<char> v;
    for (int i = 1; i <= n; i++)
    {
        char x;
        cin >> x;
        v.push_back(x);
    }
    int b = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '(')
        {
            b++;
        }
        else
        {
            b--;
            if (b < 0)
            {
                b = 0;
                cnt++;
            }
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