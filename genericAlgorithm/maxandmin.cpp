#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 10;
    cout << max(a, b) << endl; // for 3 element max(a,max(b,c));
    cout << min(a, b) << endl;
    char a1 = 'a', b1 = 'x';
    cout << max(a1, b1) << endl;
    cout << min(a1, b1) << endl;
    string a2 = "Pankaj", b2 = "Yadav";
    cout << max(a2, b2) << endl;
    cout << min(a2, b2) << endl;
    return 0;
}