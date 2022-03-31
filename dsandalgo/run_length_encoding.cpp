#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

string RLE(string s)
{
    string rle = "";
    rle += s[0];
    int rep = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            rep++;
        else
        {
            rle += to_string(rep);
            rle += s[i];
            rep = 1;
        }
    }
    rle += to_string(rep);
    return rle;
}
int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "test #" << i << ": ";
        string s;
        cin >> s;
        cout << RLE(s) << endl;
    }
    return 0;
}