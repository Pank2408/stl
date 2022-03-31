// this was fun
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

string OptRLE(string s)
{
    string opt = "";
    opt += s[0];
    int cnt = 0;
    string tempCnt = "";
    for (int i = 1; i < s.length(); i++)
    {

        if ('0' <= s[i] && s[i] <= '9')
            tempCnt += s[i];
        else
        {
            cnt += stoi(tempCnt);
            if (opt[opt.length() - 1] != s[i])
            { // R U able to undestand the below 5lines of code
                opt += to_string(cnt);
                opt += s[i];
                cnt = 0;
            }
            tempCnt = "";
        }
        // cout<<i<<","<<opt<<","<<tempCnt<<","<<cnt<<endl;
    }

    // the total count of last character is not appended
    // now add this
    cnt += stoi(tempCnt);
    opt += to_string(cnt);
    return opt;
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
        cout << OptRLE(s) << endl;
    }
    return 0;
}
// examin this code on your own
