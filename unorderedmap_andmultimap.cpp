#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace ::chrono;

void display(unordered_map<char, int> u)
{
    cout << "Printing elements of unordered map--" << endl;
    for (auto s : u)
        cout << s.F << "\t:\t" << s.S << endl;
    cout << "Printed " << u.size() << " elements successfully :)--" << endl;
}
int main()
{
    /*   cout << "hello" << endl;
       unordered_map<char, int> u;

       u['a'] = 1; // insertion
       u['a'] = 2; // updation
                   // cout << u.size() << endl;
       u['b'] = 1;
       u['t'] = 3;
       u['s'] = 3;
       u['d'] = 6;
       u.insert(mp('e', 10));
       u.insert({'c', 5});
       // display(u);
       u.insert({'a', 0}); // can not work as update.. if the key is already present,IGNORED!
       // display(u);
       u.erase('a');
       u.insert(mp('a', 0)); // Inserted as it is not already present in u
       display(u);
       if (u.find('b') == u.end())
           cout << "Key not found in unordered map!" << endl;
       else
           cout << "Key found! value=" << u['b'] << endl;
   */
    // ---Time Comparision b/w map and unordered map---
    map<double, double> g;
    unordered_map<double, double> h;
    for (int i = 0; i < 1000000; i++)
    {
        g.insert({i, i + 1.0});
        h.insert({i, i + 1.0});
    }
    srand(time(0));
    double x = rand() % 1000000; // b/w 0 and 1000000
    //--Time taken by map to find x
    auto start = high_resolution_clock::now;
    g.find(x);
    /*  if (g.find(x) == g.end())
         cout << "Key not found in ordered map!" << endl;
     else
         cout << "Key found! value=" << g[x] << endl; */
    auto stop = high_resolution_clock::now;
    cout << start << endl;
    cout << stop << endl;
    // auto duration = duration_cast<microseconds>(stop - start);
    //--Time taken by unorderedmap to find x
    start = high_resolution_clock::now;
    /*  if (h.find(x) == h.end())
         cout << "Key not found in unordered map!" << endl;
     else
         cout << "Key found! value=" << h[x] << endl; */
    h.find(x);
    stop = high_resolution_clock::now;
    cout << start << endl;
    cout << stop << endl;

    return 0;
}
// insert fn vagaira same as demo on map and multiple map