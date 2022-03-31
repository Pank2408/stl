#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> v({0, 0, 10, 20, 0, 0, 10, 0, 3});
    deque<int>::iterator it1, it2;
    // deque<int> w;

    it2 = v.end();
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        if (*it1 != 0)
        {
            it2--;
            v.swap(v);
        }
        else
            v.push_front(*it1);
    }
    for (it1 = v.begin(); it1 != v.end(); it1++)
        cout << *it1 << " ";

    return 0;
}