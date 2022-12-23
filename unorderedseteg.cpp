#include <bits/stdc++.h>
using namespace std;
int main()
{

  unordered_set<int> a;
  unordered_multiset<int> b;
  a.insert({1, 2, 3, 1, 2, 3, 1, 1});
  b.insert({1, 2, 3, 1, 2, 3, 1, 1});
  cout << a.size() << endl;
  cout << b.size() << endl;
  for (auto s : a)
    cout << s << " "; // it can be any order(bcz it's unordered set)
  cout << endl;
  cout << "hello" << endl;
  unordered_set<int> c;
  c.insert({1, 2, 1, 3, 1});
  for (auto s : c)
    cout << s << " ";
  cout << endl;
  auto it = c.find(4);
  if (it == c.end())
    cout << "NOt FOund" << endl;
  else
    cout << *it << endl;

  unordered_multiset<string> d;
  d.insert({"ab", "ab", "bd"});
  cout << d.size() << endl;

  unordered_set<int> s1{1, 2, 3}, s2{2, 2, 3, 4};
  unordered_set<int> s3 = s1;
  s3.insert(s2.begin(), s2.end());
  cout << s3.size() << endl;

  return 0;
}