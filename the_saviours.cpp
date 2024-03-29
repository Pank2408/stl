#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    stack<char> stk;
    for (auto c : s)
    {
        if (c == '0')
        {
            stk.push(c);
        }
        else
        {
            if (!stk.empty())
                stk.pop();

            if (!stk.empty())
                stk.pop();
        }
    }
    if (stk.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve(); // i have created solve fn so that i will solve the problem t number of times
    }
    return 0;
}