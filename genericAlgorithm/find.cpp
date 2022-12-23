#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 7, 1, 4, 2, 8, 5, 3};
    vector<int> v(arr, arr + 8);
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "Element found in v:" << *it << endl;
    else
        cout << " Element not found in v" << endl;
    return 0;
}