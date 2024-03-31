//-----------------------------------vector--------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a; // empty vector 'a' size and capacity is 0
    //    a[0]=2;//a doesn't have any thing right now,this is incorrect(i.e.segmentation fault)

    // vector<vector<int>> vect{
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // cout << vect.size() << endl;
    a.push_back(2);
    vector<int> b(a);
    b[0] = 6;
    // vector<char> c(a);  compile time error
    vector<char> c(5, 66);
    vector<int> d(a.begin(), a.end()); // d={2}
    d.push_back(5);
    // d={2,5} , a={2} , c={'B','B','B','B','B'}, b={6};
    // cout<<a.at(1); exception

    //     cout<<(a<d);//lexicographic order(i.e. alphabeticaly) its true
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
        v[i] = i + 1;
    //     cout<<v.at(6);
    //    cout<<v.back();
    // v={1,2,3,....,10}
    vector<int> v1(v);
    v.clear(); // memory is still there but the vector become empty
    //     cout<<"v.size()= "<<v.size()<<endl;
    //     cout<<"v.capacity()= "<<v.capacity()<<endl;
    // cout<<v[0]<<endl; still output is 1
    // cout<<v.at(0); exception
    //    cout<<v.empty()<<endl;

    // iterators
    v = v1;
    /*  for(int i=0;i<v.size();i++)
         cout<<v[i]<<" "; */

    // vector<int>::iterator it;
    /*  for ( it = v.begin(); it!=v.end(); it++)
     {
         cout<<*it<<" ";
     } */

    vector<int>::reverse_iterator it;
    for (it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";

    return 0;
}
// clear doesn't clear the memory,doesn't delete the memory
// size<=capacity
// size denotes how many elements currently present in the vector
// capacity is amt of memory i.e. allocated to this vector
// just by seeing the syntax u can infer many things

//second vector demo---
#include <iostream>
#include <vector>
using namespace std;

int main()
{
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
    for (int i = 0; i < 10; i++)
        v[i] = i + 1;
    // v = {1,2,3,..,10}
    vector<int> v1(v);
    // v1 = {1,2,3,..,10}

    v.clear();
    // cout << "v.size() = " << v.size()<<endl;
    // cout << "v.capacity() = " << v.capacity()<<endl;
    //  cout << v[0] << endl; still outputs 1
    //  cout << v.at(0); exception
    //  cout << (v.empty()) <<endl;

    // iterators
    v = v1;
    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // vector<int>::reverse_iterator  it;
    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << (*it) << " ";

    // v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    vector<int>::iterator it = v.begin();
    it += 3;
    cout << (*it) << endl;

    // Try other usage of iterators on your own

    cout << v.max_size() << endl;

    return 0;
}

//------------------------------------------List-----------------------------------

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

//-----------------------------------priority_queue--------------------------

#include <queue>
#include <iostream>
using namespace std;

template <class T>
void display(priority_queue<T> q)
{ // we havenot passed by reference here
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
void display(priority_queue<char, vector<char>, greater<char>> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
        //   return (a%3 > b%3);//the elements which have smaller value of modulo 3 will have higher priority
    }
};
void display(priority_queue<int, vector<int>, Compare> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> q1;
    for (int i = 1; i < 10; i++)
        q1.push(i);
    display(q1);
    display(q1); // if i had passed by reference then nothing will be printed

    priority_queue<string> q2;
    q2.push("ab");
    q2.push("xy");
    q2.push("bd");
    q2.push("aa");
    q2.push("AA");
    display(q2);

    priority_queue<char, vector<char>, greater<char>> q3; // it's now minheap,and it work as function now also
    q3.push('a');
    q3.push('x');
    q3.push('b');
    q3.push('s');
    display(q3);

    priority_queue<int, vector<int>, Compare> q4;
    q4.push(10);
    q4.push(5);
    q4.push(20);
    q4.push(2);
    display(q4);
    return 0;
}

//----------------------------------------------stack--------------------------------------

#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void display(stack<T> s)
{
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}
template <class T>
void displayEvery10(stack<T> s)
{
  int c = 0;
  while (!s.empty())
  {
    if (c % 10 == 0)
      cout << s.top() << " ";
    s.pop();
    c++;
  }
  // cout<<c<<endl;
  cout << endl;
}
int main()
{
  stack<int> s1;
  for (int i = 0; i < 100; i++)
    s1.push(i);
  cout << s1.size() << endl;
  // cout<<s1.top()<<endl;
  display(s1);
  displayEvery10(s1);

  stack<int> s2 = s1;
  stack<int> s3;
  s3.swap(s2);

  return 0;
}

//-----------------------------------------Deque--------------------------------------

#include<queue>
#include<iostream>
using namespace std;
template<class T>
void display(deque<T> q){
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop_front();
   }
   cout<<endl;

}
int main(){
   deque<int> q;
   q.push_back(1);
   q.push_back(2);
   q.push_back(3);
    display(q);
cout<<endl;
   for(int i=10;i<40;i+=10)
      q.push_front(i);
    cout<<q.size()<<endl;
    display(q);
   //  deque<string> q2({"abc","def","gh"});
   //  display(q2);
 deque<int>:: iterator it =q.begin();
 //stack using deque
 deque<int> s;
 s.push_back(1);
 s.push_back(2);
 s.push_back(3);
   // display(s);
   while(!s.empty()){
      cout<<s.back()<<" ";
      s.pop_back();
   }

    return 0;
}
// random access iterator for deque works as vector likeˆ
//all the functionality vector,queues ,stack everything is embedded in this one double ended queue(deque)

//------------------------------------------Queue-------------------------------

#include <queue>
#include <iostream>
using namespace std;
void printQ(queue<int> q)
{
     while (!q.empty())
     {
          cout << q.front() << " ";
          q.pop();
     }
     cout << endl;
}
queue<int> removeMultipleOf3(queue<int> q)
{
     queue<int> mq;
     while (!q.empty())
     {
          if (q.front() % 3 != 0)
               mq.push(q.front());
          q.pop();
     }
     return mq;
}
int main()
{
     queue<int> q1;

     for (int i = 1; i < 100; i += 10)
     {
          q1.push(i);
     }
     //   cout<<q1.size();
     printQ(q1);
     printQ(q1);
     q1 = removeMultipleOf3(q1);
     printQ(q1);

     return 0;
}

//-------------------------------------------Deque-------------------------------
#include<queue>
#include<iostream>
using namespace std;
template<class T>
void display(deque<T> q){
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop_front();
   }
   cout<<endl;

}
int main(){
   deque<int> q;
   q.push_back(1);
   q.push_back(2);
   q.push_back(3);
    display(q);
cout<<endl;
   for(int i=10;i<40;i+=10)
      q.push_front(i);
    cout<<q.size()<<endl;
    display(q);
   //  deque<string> q2({"abc","def","gh"});
   //  display(q2);
 deque<int>:: iterator it =q.begin();
 //stack using deque
 deque<int> s;
 s.push_back(1);
 s.push_back(2);
 s.push_back(3);
   // display(s);
   while(!s.empty()){
      cout<<s.back()<<" ";
      s.pop_back();
   }

    return 0;
}
// random access iterator for deque works as vector likeˆ
//all the functionality vector,queues ,stack everything is embedded in this one double ended queue(deque)

//-----------------------------------pair---------------------------------------

#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back

template <class Pair>
void displayVecPair(const vector<Pair> &v)
{
     // we just want to print them isliye const lgaya
     // T can be pair as welll instead of T u can use for pair name it is more readable (rename only)

     cout << "---" << endl;
     for (auto e : v)
     {
          cout << '(' << e.F << ", " << e.S << ')' << endl;
     }
     //  for(int i=0;i<v.size();i++){
     //   cout<<"(" << v[i].F << ", " << v[i].S <<")"<< endl;
     //  }
     cout << "printed " << v.size() << " pair of the vector!" << endl;
}
template <class Pair>
void displayVecTrip(const vector<Pair> &v)
{
     cout << "---" << endl;
     for (auto e : v)
     {
          cout << '(' << e.F << ", " << e.S.F << ", " << e.S.S << ')' << endl;
     }
     cout << "printed " << v.size() << " pair of the vector!" << endl;
}

bool sortbysecDesc(const pair<int, string> &a, const pair<int, string> &b)
{ // we have to use here pair of string
     return (a.S > b.S);
}
bool sortbyfirstDesc(const pair<int, string> &a, const pair<int, string> &b)
{ // we have to use here pair of string
     return (a.F > b.F);
}

bool sortbysec(const pair<int, string> &a, const pair<int, string> &b)
{ // we have to use here pair of string
     return (a.S < b.S);
}
bool sortByThird(const pair<int, pi> &a, const pair<int, pi> &b)
{
     return a.S.S < b.S.S;
}
bool comp(const pi &a, const pi &b)
{
     if (a.S == b.S)
          return a.F > b.F;
     return a.S < b.S;
}
// bool sortBySecond(const pair<int,pi> &a,const pair<int,pi> &b){
//      if(a.S.F==b.S.F){
//           return a.F<b.F;
//      }

//      return a.S.F<b.S.F;
// }

int main()
{

     pi a; // a is now pair of integers
     a = mp(1, 2);
     // cout<<a.F<<" "<<a.S<<endl;
     vector<pi> v;
     v.pb(mp(41, 51));
     v.pb(mp(21, 31));
     // displayVecPair(v);
     vector<pair<int, string>> v2;
     v2.pb(mp(4, "hello"));
     v2.pb(mp(1, "world"));

     v2.pb(mp(6, "pair"));
     v2.pb(mp(3, "vECTOR"));
     v2.pb(mp(5, "queue"));
     v2.pb(mp(2, "stack"));
     //  displayVecPair(v2);
     // sort in ascending order of first value of pairs
     sort(v2.begin(), v2.end());
     displayVecPair(v2);

     // sort in ascending order of second value of pairs
     sort(v2.begin(), v2.end(), sortbysec); // koi bhi comprator fn ho uska return type bool hoga
     displayVecPair(v2);                    // sort on based on the string
                                            // sort in ascending order of second value of pairs
     sort(v2.begin(), v2.end(), sortbysecDesc);
     displayVecPair(v2);

     // sort in Descending order of first value of pairs

     sort(v2.begin(), v2.end(), sortbyfirstDesc);
     displayVecPair(v2);

     vector<pair<int, pi>> v3;
     v3.pb({3, {1, 2}});
     v3.pb({1, {3, 3}});
     v3.pb({2, {3, 1}});
     sort(v3.begin(), v3.end(), sortByThird);
     displayVecTrip(v3); // sort vector of 3 element

     vector<pi> v4;
     v4.pb({2, 1});
     v4.pb({3, 1});
     v4.pb({1, 2});
     v4.pb({5, 2});
     v4.pb({7, 0});
     sort(v4.begin(), v4.end(), comp);
     displayVecPair(v4);
     // int a,b,c,d;
     // cin>>b,c,d;
     // cout<<" "<<b<<" "<<c<<" "<<d<<endl;
     vector<int>::iterator it;
     int ans = distance(v.begin(), v.end());
     cout << ans;

     return 0;
}

//---------------------------------------set and multiset---------------------------

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
    bool operator()(const pi &a, const pi &b)
    {
        return a.S < b.S;
    }
};

int main()
{
    set<int> s1;
    s1.insert(4);
    s1.insert(1);
    s1.insert(5);
    set<int>::iterator it;
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;
    s1.insert(1);
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;
    s1.erase(5); // direct value 5 delete ho gya(iterator se bhi delete kr sakte hai but generaly iterator is use when delete from renj)
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;
    it = s1.find(4);
    s1.erase(s1.begin(), it);
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;
    // set<pi> s2(isse to first vale value increasing order me hoyenge)
    set<pi, comp> s2; // now arranged based on there second value,class bnana pdega direc function nhi bnate hai isme obj pass krna pdta hai
    s2.insert(mp(1, 2));
    s2.insert(mp(0, 3));
    s2.insert(mp(0, 0));
    s2.insert(mp(5, 1));
    set<pi>::iterator it2; // pair wala iterator bnana pdega
    for (it2 = s2.begin(); it2 != s2.end(); ++it2)
    {
        cout << it2->F << " " << it2->S << endl;
    }

    return 0;
}
// since we r using implemnt bst it takes o(logn) time
// now u can do anything like set of vectors also and arrange them based on their first or second vlaue

//---------------------------------------unordered set and multiset--------------------------

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> a;
    unordered_multiset<int> s2;
    a.insert({1, 2, 3, 1, 2, 3, 1, 1});
    s2.insert({1, 2, 3, 1, 2, 3, 1, 1});
    cout << a.size() << endl;  // size 3
    cout << s2.size() << endl; // size 8
    // for (auto s : a)
    //     cout << s << " ";

    auto it = a.find(4);
    if (it == a.end())
        cout << "Not found" << endl;
    else
        cout << *it << endl;
    unordered_multiset<string> s;
    s.insert({"ab", "ab", "bd"});
    cout << s.size() << endl;

    unordered_set<int> s5{1, 2, 4}, s7{2, 2, 3, 5};
    unordered_set<int> s3 = s5;
    s3.insert(s7.begin(), s7.end());
    cout << s3.size() << endl; // union of two sets
    return 0;
}

//----------------------------------------map and multimap---------------------------------

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

//----------------------------------unordered map and multimap--------------------------------

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
       u.insert({'c', 5}); //initializer list
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

//----------------------------------------bitset-----------------------------------
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

int main()
{
    bitset<10> b(200);
    cout << b << endl;
    cout << b[2] << endl; // posn 2 pe jo bit hai vo
    for (int i = 0; i < 10; i++)
        cout << b[i]; // reverse se indexing hoti hai binary me(it's not string)
    cout << endl;
    b[0] = 1; // zeroth bit set to 1
    cout << b << endl;
    b.set();
    cout << b << endl;

    return 0;
}

//-----------------------------------Fast i/o in c++------------------------

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
