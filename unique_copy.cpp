#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myArr[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
    vector<int> v(9);
    vector<int>::iterator it;
    it = unique_copy(myArr, myArr + 9, v.begin());

    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    return 0;
}