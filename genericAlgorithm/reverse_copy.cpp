#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> myvector(10);
    reverse_copy(arr, arr + 10, myvector.begin());
    cout << "Content of vector v:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
        cout << " " << *it;

    return 0;
}