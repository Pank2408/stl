#include <bits/stdc++.h>
using namespace std;
int myrandom(int i)
{
    return rand() % i;
}
int main()
{
    srand(unsigned(time(0)));
    vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(i);
    // random_shuffle(v.begin(), v.end());
    random_shuffle(v.begin(), v.end(), myrandom);
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    return 0;
}