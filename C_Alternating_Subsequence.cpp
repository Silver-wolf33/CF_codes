#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long int

bool sgn(int n)
{
    return n > 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int cur = a[i];
        int j = i;
        while (j + 1 < n && sgn(a[j]) == sgn(a[j + 1]))
        {
            cur = max(cur, a[j + 1]);
            j++;
        }

        v.push_back(cur);
        i = j;
    }

    ll sum = 0;
    for (int x : v)
    {
        sum += x;
    }
    cout << sum << endl;
}

int32_t main()
{
    fast int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
