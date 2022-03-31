#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    // a[0] = 2;  segmentation fault
    a.push_back(2);
    vector<int> b(a);
    b[0] = 6;
    // vector<char> c(a); compiler error
    vector<char> c(5, 66);
    vector<int> d(a.begin(), a.end()); // d = {2}
    d.push_back(5);


    // d = {2,5}, a = {2}, c = {'B','B','B','B','B'}, b = {6}
    // cout<<a.at(1); exception

    vector<int> v(10);
    for(int i=0; i<10; i++)
        v[i] = i+1;
    // v = {1,2,3,..,10}
    vector<int> v1(v);
    // v1 = {1,2,3,..,10}

    v.clear();
    //cout << "v.size() = " << v.size()<<endl;
    //cout << "v.capacity() = " << v.capacity()<<endl;
    // cout << v[0] << endl; still outputs 1
    // cout << v.at(0); exception
    // cout << (v.empty()) <<endl;

    // iterators
    v = v1;
    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    /*
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    // vector<int>::reverse_iterator  it;
    for(auto it = v.rbegin(); it!=v.rend(); it--)
        cout << (*it) << " ";
    */

    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    vector<int>::iterator  it = v.begin();
    it += 3;
    cout << (*it) << endl;

    // Try other usage of iterators on your own

    cout << v.max_size() << endl;

    return 0;
}