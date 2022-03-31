#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

long long maxProdkPos(vector<int> v, int k)
{
    priority_queue<int, vector<int>, greater<int>> q;
    // min priority queue storing the largest k integer
    for (int i = 0; i < k; i++)
        q.push(v[i]);
    for (int i = k; i < v.size(); i++)
    {
        if (v[i] > q.top())
        {
            q.pop();
            q.push(v[i]);
        }
    }
    long long maxprod = 1;
    while (!q.empty())
    {
        maxprod += q.top();
        q.pop();
    }
    return maxprod;
}

int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "test #" << i << ": ";
    }
}
// what if we have -ve integers