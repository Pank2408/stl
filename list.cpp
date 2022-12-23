// there is no randam access iterator for list
#include <iostream>
#include <list>
using namespace std;
void displayList(list<int> l)
{
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
int main()
{
    list<int> l1, l2;
    for (int i = 1; i <= 10; i++)
        l1.push_back(i);
    for (int i = 5; i <= 15; i++)
        l2.push_back(i);
    // l1:{1,2,3,....,10}
    // l2:{5,6,7,....,15}

    displayList(l1);
    cout << l1.front() << endl;
    l1.pop_front();
    l2.pop_back();
    displayList(l1);
    displayList(l2);
    // l1:{2,3,4....,10}
    // l2:{5,6,7,....,14}

    l1.reverse();
    displayList(l1);
    // we don't have random access iterator in list still sort fn is applicable
    // l1.sort();
    l1.swap(l2);
    displayList(l1);
    displayList(l2);
    // l1:{5,6,7,....,14}
    // l2:{10,9,8,......2}

    list<int> l3(10, 22);
    displayList(l3);
    l3.resize(7);
    displayList(l3);
    // l3:{22 22 22 22 22 22 22}

    l3.assign(l2.begin(), l2.end());
    displayList(l3);
    // l3:{10,9,8,......2}
    cout << l3.size() << endl;
    list<int> l4(l3);
    cout << (l3 == l4) << endl; // comparator(equality operator for list is overloaded,smililarly other container like in vector also equality operator is overloaded similarly other operator also like >,<,<=and >=)
    cout << (l1 > l4) << endl;  // overloaded in lexicographic order
    l4.insert(l4.begin(), 2, 10);
    displayList(l4);

    l4.clear();
    cout << l4.size() << endl;
    cout << !l4.empty() << endl;   // is l4 is not empty
    cout << l4.max_size() << endl; // list can be this long:76861433640464650

    return 0;
}