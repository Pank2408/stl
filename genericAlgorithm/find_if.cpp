#include <bits/stdc++.h>
using namespace std;
bool isEven(int i)
{
    return ((i % 2) == 0);
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    auto it = find_if(v.begin(), v.end(), isEven);
    if (it != v.end())
        cout << "Even number found in v" << endl;
    else
        cout << "Even number NOT found in v" << endl;

    return 0;
}