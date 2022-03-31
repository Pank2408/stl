#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    for (int x : arr)
        cout << x << " ";
    return 0;
}