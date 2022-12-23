// https://unacademy.com/batch/placement-20-crack-coding-interviews-4-months-batch/37RWANR1
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
bool comp(pi &a, pi &b)
{
    if (a.F == b.F)
        return a.S > b.S;
    return a.F < b.F;
}
void solve()
{
    int n;
    cin >> n;
    vector<pi> v(n);
    FOR(i, 0, n)
        cin >> v[i].F >> v[i].S;
    sort(v.begin(), v.end(), comp);
    double ans = 0.0;
    FOR(i, 1, n)
    { // distance formula hai
        ans += sqrt((v[i - 1].F - v[i].F) * (v[i - 1].F - v[i].F) +
                    (v[i - 1].S - v[i].S) * (v[i - 1].S - v[i].S));
    }
    cout << ans << endl;
}
int main()
{
    int t;
    while (t--)
        solve();

    return 0;
}
