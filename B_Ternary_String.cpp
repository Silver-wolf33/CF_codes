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
    string s;
    cin >> s;
    queue<char> q;
    for (int i = 0; i < s.size(); i++)
    {
        q.push(s[i]);
    }
    deque<char> dq;
    map<char, int> cnt;
    int mn = INT_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        char x = q.front();
        dq.push_back(x);
        cnt[x]++;
        q.pop();
        if (cnt.size() == 3)
            break;
    }
    if (cnt.size() == 3)
    {
        while (1)
        {
            mn = min(mn, (int)dq.size());
            // for (int i = 0; i < dq.size(); i++)
            //     cout << dq[i];
            // cout << endl;
            char x = dq.front();
            if (cnt[x] == 1)
            {
                while (!q.empty())
                {
                    dq.push_back(q.front());
                    cnt[q.front()]++;
                    q.pop();
                    if (cnt[x] > 1)
                        break;
                }
            }
            dq.pop_front();
            cnt[x]--;

            if (cnt[x] == 0)
                break;
        }
        cout << mn << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
int32_t main()
{
    fast
        test
        solve();
    return 0;
}