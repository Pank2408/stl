#include <bits/stdc++.h>
using namespace std;
bool myfn(int i, int j) { return i < j; }
struct myclass
{
    bool operator()(int i, int j) { return i < j; }
} myobj;

int main()
{
    int intArr[] = {3, 7, 2, 5, 6, 4, 9};
    cout << *min_element(intArr, intArr + 7) << "\n";
    cout << *max_element(intArr, intArr + 7) << "\n";
    cout << *min_element(intArr, intArr + 7, myfn) << "\n";
    cout << *max_element(intArr, intArr + 7, myfn) << "\n";
    cout << *min_element(intArr, intArr + 7, myobj) << "\n";
    cout << *max_element(intArr, intArr + 7, myobj) << "\n";
    return 0;
}
