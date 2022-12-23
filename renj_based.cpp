#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        v[i] = i + 1;
    for (auto x : v) // it is what eat is
        cout << x << " ";
    cout << endl;

    int arr[5];
    for (int i = 0; i < 5; i++)
        arr[i] = i + 5;
    for (int x : arr)
        cout << x << " ";
    return 0;
}
// example of for each loop