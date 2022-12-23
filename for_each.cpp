// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i)
// {
//     cout << i << " ";
// }
// int main()
// {
//     vector<int> v(5);
//     for (int i = 0; i < 5; i++)
//         v[i] = i + 1;
//     for_each(v.begin(), v.end(), fun);
//     cout << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
struct A
{
    void operator()(int i)
    {
        cout << i + 5 << " ";
    }
};
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        v[i] = i + 1;
    struct A obj;
    for_each(v.begin(), v.end(), obj);
    cout << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "Pankaj Yadav";
//     for (char x : str)
//         cout << x << " ";
//     cout << endl;
//     for (int x : {1, 2, 3, 4, 5})
//         cout << x << " ";
//     cout << endl;
//     return 0;
// }
