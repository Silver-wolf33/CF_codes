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
    ll n, t;
    cin >> n >> t;
    int a[n];
    vector<int> v;
    cin(a)
        ll max_cnt = 0,
           sum = 0;
    int left = 0;
    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum > t)
        {
            sum -= a[left];
            left++;
        }
        max_cnt = max(max_cnt, (ll)(right - left + 1));
    }
    cout << max_cnt << endl;
}
int32_t main()
{
    fast
    solve();
    return 0;
}