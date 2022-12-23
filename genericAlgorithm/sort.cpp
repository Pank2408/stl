#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int intArr[] = {3, 1, 7, 4, 2, 8, 5, 6};
  vector<int> v(intArr, intArr + 8);
  sort(v.begin(), v.begin() + 5, greater<int>());
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  /*for(int i=0;i<8;i++)
  cout<<v[i]<<" ";*/
  return 0;
}