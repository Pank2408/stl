#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

class comp
{
public:
    bool operator()(char a, char b)
    {
        return a > b;
    }
};

void display(map<char, int> u)
{
    cout << "printed elements of the map---" << endl;
    map<char, int>::iterator it;
    for (it = u.begin(); it != u.end(); it++)
    {
        cout << (*it).F << "\t:\t" << it->S << endl; // chahe (*it).F or it->F both are same
    }
    cout << "printed " << u.size() << "elements successfully" << endl;
}
void display(multimap<char, int> u)
{
    cout << "printed elements of the multimap---" << endl;
    map<char, int>::iterator it;
    for (it = u.begin(); it != u.end(); it++)
    {
        cout << (*it).F << "\t:\t" << it->S << endl; // chahe (*it).F or it->F both are same
    }
    cout << "printed " << u.size() << "elements successfully" << endl;
}
void display(map<char, int, comp> u)
{
    cout << "printed elements of the map---" << endl;
    map<char, int>::iterator it;
    for (it = u.begin(); it != u.end(); it++)
    {
        cout << (*it).F << "\t:\t" << it->S << endl; // chahe (*it).F or it->F both are same
    }
    cout << "printed " << u.size() << "elements successfully" << endl;
}
int main()
{
    map<char, int> u; // map is nothing but key value pair
    u['a'] = 2;       // a is map to 2
    u['a'] = 3;       // value will be updated
    cout << u.size() << endl;
    u['b'] = 1;
    u['t'] = 3;
    u['s'] = 3;
    u['d'] = 6;
    // u.insert('e',2);//insertion of pair is allwed
    // make_pair created a pair of two element
    u.insert(make_pair('e', 10));
    //    u.insert({'c',5});
    u.insert(mp('c', 5)); // we have created macro for make_pair as mp
    cout << u.size() << endl;

    //    display(u);
    u.insert(mp('a', 0)); // NOT be updation when V use insert,since the key already exists ,IGNORED
    //    display(u);
    u.erase('a'); // erased the pair corresponding to key 'a'
    u.insert(mp('a', 0));
    //    display(u);

    map<char, int>::iterator it2 = u.begin();

    ++it2;
    ++it2;
    u.insert(it2, mp('z', 9)); // no effect of iterator/position,since ordered
    //    display(u);
    cout << u['y'] << endl;     // garbage value sice key is not found
    if (u.find('b') == u.end()) // find fn returns an iterator
        cout << "key not found!" << endl;
    else
        cout << "key is found,value=" << u['b'] << endl;

    map<char, int, comp> v; // descending order of keys
    v.insert(u.begin(), u.end());
    display(v);
    // now multimap

    multimap<char, int> w;
    w.insert(mp('a', 2));
    w.insert(mp('a', 1));
    w.insert(mp('a', 3));
    w.insert(mp('b', 3));
    display(w);

    w.erase('a'); // all occurence of 'a' will be deleted
    display(w);
    w.insert(mp('a', 2));
    w.insert(mp('a', 1));
    w.insert(mp('a', 3));

    auto res = w.equal_range('a');
    for (auto it = res.F; it != res.S; it++)
        cout << it->S << endl;

    return 0;
}