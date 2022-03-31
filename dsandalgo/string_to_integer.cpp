// STOI fn-=>"341" converts 341
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

int Stoi(string s)
{
    // string s converted to integer equivalent n
    int n = 0;
    for (auto c : s)
    {
        n *= 10;
        // adding the integer equivalent of character c
        n += (c - '0');
    }

    return n;
}
// convert int to string
string Itos(int n)
{
    // integer n converted to string equivalent s
    if (n == 0)
        return "0";
    string s = " ";
    while (n)
    {
        s += char(n % 10 + '0');
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "case #" << i << ": ";
        // string s;
        // cin >> s;
        int n;
        cin >> n;
        cout << Itos(n) << endl;
    }

    return 0;
}