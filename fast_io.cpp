
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define endl '\n'
int main()
{
    // ios_base::sync_with_stdio(false);  ---ye do line add kro aur endl ko \n macro define kr do bas fast ho jayega u may need not to chage cin and cout with scanf and printf respectively
    // cin.tie(NULL);
    time_point<system_clock> start, end;
    // code here---
    int n;
    cin >> n;
    int a[n];
    start = system_clock::now();
    for (int i = 0; i < n; i++)
        // cin >> a[i]; this takes more time than scanf
        // scanf("%d", a[i]); (10 times faster than cin)or scanf("%d",a+i);
        // cout << 1 << endl; endl is slower than '\n'
        // cout << 1 << '\n'; \n ke liye macro define kr do bas
        cout << 1 << endl;
    // similarly printf is faster than cout
    end = system_clock::now();

    //---  --
    duration<float> fsec = end - start;
    microseconds tm = duration_cast<microseconds>(fsec);
    cout << "Time taken = " << tm.count() << " microseconds." << endl;

    return 0;
}
