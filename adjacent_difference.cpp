#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 9, 11, 12};
    int out[7];
    adjacent_difference(arr, arr + 7, out); // 2nd value consider as first argument
    for (int i = 0; i < 7; i++)
        cout << out[i] << " ";
    cout << endl;
    // adjacent_difference(arr, arr + 7, multiplies<int>());
    // multiplies<int>()   returns  a*b
    // for (int i = 0; i < 7; i++)
    //     cout << out[i] << " ";
    // cout << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int myop1(int x, int y) { return x % y; }
// int myop2(int x, int y) { return y % x; }
// int main()
// {
//     int arr[] = {1, 2, 3, 5, 9, 11, 12};
//     int out[7];
//     adjacent_difference(arr, arr + 7, out, myop1); // 2nd value consider as first argument
//     for (int i = 0; i < 7; i++)
//         cout << out[i] << " "; // it will copy the first value
//     cout << endl;
//     adjacent_difference(arr, arr + 7, out, myop2); // 2nd value consider as first argument
//     for (int i = 0; i < 7; i++)
//         cout << out[i] << " ";
//     cout << endl;
//     return 0;
// }