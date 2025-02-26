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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    int cnt = 0, flag = 1;
    for (int i = 1; i < n; i++)
    {
        // if (v[i - 1] < v[i])
        //     //c++;
        if (v[i - 1] <= v[i])
        {
            while (v[i - 1] <= v[i])
            {
                if (v[i] == v[i - 1] && v[i] == 0)
                {
                    flag = 0;
                    break;
                }
                // cout << v[i] << endl;
                v[i] = v[i] / 2;
                cnt++;
            }
        }
    }
    if (flag == 0)
        cout << -1 << endl;
    else
        cout << cnt << endl;
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}