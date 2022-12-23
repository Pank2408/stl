#include <bits/stdc++.h>
using namespace std;
int fun(int i)
{
    return ++i;
}
int main()
{
    vector<int> v1, v2;
    for (int i = 1; i < 6; i++)
        v1.push_back(i);
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), fun);
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << " " << *it;
    return 0;
}
// int fun(int i, int j)
// {
//     return i + j;
// }
// int main()
// {
//     vector<int> v1{1, 2, 3, 4, 5};
//     vector<int> v2{2, 3, 4, 5, 6};
//     transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), fun);
//     for (auto it = v1.begin(); it != v1.end(); ++it)
//         cout << " " << *it;
//     return 0;
// }