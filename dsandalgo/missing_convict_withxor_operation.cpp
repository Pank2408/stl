#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

int missingConvict(vector<int> v)
{
    int missingNumber = 0;
    for (int i = 0; i <= v.size() + 1; i++)
        missingNumber ^= i;
    for (auto n : v) // for all the numbers in the vector we will xor all the numbers with missing number
        missingNumber ^= n;
    return missingNumber;
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