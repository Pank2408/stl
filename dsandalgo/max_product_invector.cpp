// Given a vector of integer,find the maximum product of any 2 integers.
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

long long maxProd2(vector<int> v)
{ // return the maximum product of two integers in v
    long long max1 = INT_MIN, max2 = INT_MIN;
    long long min1 = INT_MAX, min2 = INT_MAX;
    for (auto n : v)
    {
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
            max2 = n;
        if (n < min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
            min2 = n;
    }
    return max(max1 * max2, min1 * min2);
    // for maximum product of 3 integers return(max(max1*max2*max3,max1*min1*min2))
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