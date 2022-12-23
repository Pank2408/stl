#include <bits/stdc++.h>
using namespace std;
void print(stack<string> &s)
{ //& nhi lgaoge to n copy craeate ho jaga,cmplxty will be high
    if (!s.empty())
    {
        string temp = s.top();
        s.pop();
        print(s);
        cout << temp << "/n";
    } // this is how the content of stack print in reverse order or u can use reverse
}
void alter(stack<string> &s, string &x)
{
    if (x[0] == '/')
    {
        x = x.substr(1, x.length() - 1);
        while (!s.empty())
            s.pop();
    }
    string curr = "";
    //  const char* c_str() const ;
    char c;
    for (int i = 0; i < s.size(); i++)
    {
        if (c != '/')
        {
            curr += c;
        }
        else
        {
            if (curr == "..")
            {
                if (!s.empty())
                    s.pop();
            }
            else
            {
                s.push(curr);
            }
            curr = "";
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    string a, b;
    while (n--)
    {
        cin >> a;
        stack<string> s;
        if (a == "pwd")
        {
            cout << "/";
            stack<string> s2 = s;
            print(s2);
            cout << endl;
        }
        else
        {
            cin >> b;
            alter(s, b);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}