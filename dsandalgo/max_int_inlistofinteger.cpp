#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
int maxVector(vi &v)
{ // return the max integer in vector
    int cm = INT_MIN;
    for (auto n : v)
    {
        if (n > cm)
            cm = n;
    }
    return cm;
}

int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "case #" << i << ": ";
        int n;
        cin >> n;
        // cout<<maxVector(n)
    }

    return 0;
}