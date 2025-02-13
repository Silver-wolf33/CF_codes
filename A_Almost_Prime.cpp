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
int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
}
int almost_prime(int n)
{
    vector<int> div;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
            {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    int cnt = 0;
    for (int x : div)
    {
        if (prime(x))
        {
            cnt++;
        }
    }
    if (cnt == 2)
        return 1;
    else
        return 0;
}
void solve()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (almost_prime(i))
        {
            cnt++;
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