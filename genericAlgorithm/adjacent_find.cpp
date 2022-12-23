#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 20, 5, 30, 30, 20, 13, 10, 10, 20};
    vector<int> v(arr, arr + 8);
    // vector<int>::iterator it;
    auto it = adjacent_find(v.begin(), v.end()); // auto is used when u don't kow the datatype
                                                 // adjacent_find searches the renge [first,last) for the first occurence of two consecutive elements that match,and returns an iterator to the first of these two elements, or last if no such pair is found
    if (it != v.end())
        cout << "Found: " << *it << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// bool myfunction(int i, int j) { return (i == j + 3); }
// int main()
// {
//     int arr[] = {5, 20, 5, 30, 30, 20, 13, 10, 10, 20};
//     vector<int> v(arr, arr + 8);
//     vector<int>::iterator it;
//     it = adjacent_find(v.begin(), v.end(), myfunction);
//     if (it != v.end())
//         cout << "Found: " << *it << endl;
//     return 0;
// }