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
