#include <bits/stdc++.h>
using namespace std;
// bool fun(int i, int j) { return (i <= j); }
int main()
{
    int intArr[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
    vector<int> v(intArr, intArr + 9);
    vector<int>::iterator it;
    it = unique(v.begin(), v.end());
    // it = unique(v.begin(), v.end(), fun);
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    return 0;
}