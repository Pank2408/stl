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

int main()
{
    bitset<10> b(200);
    cout << b << endl;
    cout << b[2] << endl; // posn 2 pe jo bit hai vo
    for (int i = 0; i < 10; i++)
        cout << b[i]; // reverse se indexing hoti hai binary me(it's not string)
    cout << endl;
    b[0] = 1; // zeroth bit set to 1
    cout << b << endl;
    b.set();
    cout << b << endl;

    return 0;
}
// play around with it(try to use it)