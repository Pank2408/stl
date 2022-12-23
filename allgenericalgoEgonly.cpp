
//----------------sort-----------------
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
//stable_sort


//----------binary_search,upper_bound,lower_bound-----------
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,7,1,4,2,8,5,6};
    vector<int> v(arr,arr+8);
    sort(v.begin(),v.end());//binary srch apply krne se pahle element ka sort hona jaruri hai
   if(binary_search(v.begin(),v.end(),9))
       cout<<"found! \n"<<endl;
    else
        cout<<"not found"<<endl;
    vector<int>::iterator up;
    vector<int>::iterator lo=lower_bound(v.begin(),v.end(),2);
    up=upper_bound(v.begin(),v.end(),2);
    cout<<"Upper bound is at pos:"<<up-v.begin()<<endl;
    cout<<"Lower bound is at position: "<<(lo-v.begin());   

}


//------------------count,count_if------------------
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int array[]={1,2,3,3,2,1,1,2};
    vector<int> v(array,array+8);
    int c=count(v.begin(),v.end(),1);
    cout<<"1 occurs "<<c<<" times";
    return 0;
}
//count_if
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isEven(int i){ return (i%2==0); }
int main(){
    vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(i+1);
    int c = count_if(v.begin(),v.end(),isEven);
    cout<<"vector v contains "<<c<<" even values.";
    return 0;
}
//countif is how many elements in sequence satisfy the unary predicate 'pred'



//-------------------find,find_if----------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 7, 1, 4, 2, 8, 5, 3};
    vector<int> v(arr, arr + 8);
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "Element found in v:" << *it << endl;
    else
        cout << " Element not found in v" << endl;
    return 0;
}
//find_if
#include <bits/stdc++.h>
using namespace std;
bool isEven(int i)
{
    return ((i % 2) == 0);
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    auto it = find_if(v.begin(), v.end(), isEven);
    if (it != v.end())
        cout << "Even number found in v" << endl;
    else
        cout << "Even number NOT found in v" << endl;

    return 0;
}




//----------------------------unique,unique_copy--------------------------
#include <bits/stdc++.h>
using namespace std;
// bool fun(int i, int j) { return (i <= j); }
int main()
{
    int intArr[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
    vector<int> v(intArr, intArr + 9);
    vector<int>::iterator it;
    it = unique(v.begin(), v.end());
    // it = unique(v.begin(), v.end(), fun);
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    return 0;
}
//unique_copy()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myArr[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
    vector<int> v(9);
    vector<int>::iterator it;
    it = unique_copy(myArr, myArr + 9, v.begin());

    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    return 0;
}





//-------------------------------reverse,reverse_copy-----------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i + 1);
    reverse(v.begin(), v.end());
    cout << "Content of vector v:";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << " " << *it;
    return 0;
}
//reverse_copy()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> myvector(10);
    reverse_copy(arr, arr + 10, myvector.begin());
    cout << "Content of vector v:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
        cout << " " << *it;

    return 0;
}






//-------------------------------transform,rotate,rotate_copy------------------------------(don't forget try to use these)
#include <bits/stdc++.h>
using namespace std;
int fun(int i)
{
    return ++i;
}
int main()
{
    vector<int> v1, v2;
    for (int i = 1; i < 6; i++)
        v1.push_back(i);
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), fun);
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << " " << *it;
    return 0;
}
//or other way also
int fun(int i, int j)
{
    return i + j;
}
int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{2, 3, 4, 5, 6};
    transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), fun);
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << " " << *it;
    return 0;
}

//rotate()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i < 10; ++i)
        v.push_back(i);
    rotate(v.begin(), v.begin() + 3, v.end());
    cout << "Contents of vector v:";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << " " << *it;
    return 0;
}
//rotate_copy()
//syntax
template<class ForwardIterator,class OutputIterator> 
OutputIterator rotate_copy(ForwardIterator first,ForwardIterator middle,ForwardIterator last,OutputIterator result);








//---------------------------------random_suffle-------------------------------------
//rearranges the elements
#include <bits/stdc++.h>
using namespace std;
int myrandom(int i)
{
    return rand() % i;
}
int main()
{
    srand(unsigned(time(0)));
    vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(i);
    // random_shuffle(v.begin(), v.end());
    random_shuffle(v.begin(), v.end(), myrandom);
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    return 0;
}








//-----------------------------------for_each-----------------------------------
#include <bits/stdc++.h>
using namespace std;
void fun(int i)
{
    cout << i << " ";
}
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        v[i] = i + 1;
    for_each(v.begin(), v.end(), fun);
    cout << endl;
    return 0;
}
//eg 2
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
//eg 3  (range-based for loop)
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        v[i] = i + 1;
    for (auto x : v) // it is what eat is
        cout << x << " ";
    cout << endl;

    int arr[5];
    for (int i = 0; i < 5; i++)
        arr[i] = i + 5;
    for (int x : arr)
        cout << x << " ";
    return 0;
}
// example of for each loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Pankaj Yadav";
    for (char x : str)
        cout << x << " ";
    cout << endl;
    for (int x : {1, 2, 3, 4, 5})
        cout << x << " ";
    cout << endl;
    return 0;
}







//---------------------------------------------max,max_element,min,min_element-----------------------------
//eg of max() and min() 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 10;
    cout << max(a, b) << endl; // for 3 element max(a,max(b,c));
    cout << min(a, b) << endl;
    char a1 = 'a', b1 = 'x';
    cout << max(a1, b1) << endl;
    cout << min(a1, b1) << endl;
    string a2 = "Pankaj", b2 = "Yadav";
    cout << max(a2, b2) << endl;
    cout << min(a2, b2) << endl;
    return 0;
}
//eg of max_element() and min_element()
#include <bits/stdc++.h>
using namespace std;
bool myfn(int i, int j) { return i < j; }
struct myclass
{
    bool operator()(int i, int j) { return i < j; }
} myobj;

int main()
{
    int intArr[] = {3, 7, 2, 5, 6, 4, 9};
    cout << *min_element(intArr, intArr + 7) << "\n";
    cout << *max_element(intArr, intArr + 7) << "\n";
    cout << *min_element(intArr, intArr + 7, myfn) << "\n";
    cout << *max_element(intArr, intArr + 7, myfn) << "\n";
    cout << *min_element(intArr, intArr + 7, myobj) << "\n";
    cout << *max_element(intArr, intArr + 7, myobj) << "\n";
    return 0;
}






//---------------------adjacent_difference,adjacent_find---------------------------(try to use its useful for some problem)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 9, 11, 12};
    int out[7];
    adjacent_difference(arr, arr + 7, out); // 2nd value consider as first argument
    for (int i = 0; i < 7; i++)
        cout << out[i] << " ";
    cout << endl;
    // adjacent_difference(arr, arr + 7, multiplies<int>());
    // multiplies<int>()   returns  a*b
    // for (int i = 0; i < 7; i++)
    //     cout << out[i] << " ";
    // cout << endl;
    return 0;
}
//eg 2 
#include <bits/stdc++.h>
using namespace std;
int myop1(int x, int y) { return x % y; }
int myop2(int x, int y) { return y % x; }
int main()
{
    int arr[] = {1, 2, 3, 5, 9, 11, 12};
    int out[7];
    adjacent_difference(arr, arr + 7, out, myop1); // 2nd value consider as first argument
    for (int i = 0; i < 7; i++)
        cout << out[i] << " "; // it will copy the first value
    cout << endl;
    adjacent_difference(arr, arr + 7, out, myop2); // 2nd value consider as first argument
    for (int i = 0; i < 7; i++)
        cout << out[i] << " ";
    cout << endl;
    return 0;
}
//adjacent_find()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 20, 5, 30, 30, 20, 13, 10, 10, 20};
    vector<int> v(arr, arr + 8);
    // vector<int>::iterator it;
    auto it = adjacent_find(v.begin(), v.end()); // auto is used when u don't kow the datatype
// adjacent_find searches the renge [first,last) for the first occurence of two consecutive elements that match,and returns an iterator to the first of these two elements, or last if no such pair is found.
    if (it != v.end())
        cout << "Found: " << *it << endl;
    return 0;
}
//eg2 
#include <bits/stdc++.h>
using namespace std;
bool myfunction(int i, int j) { return (i == j + 3); }
int main()
{
    int arr[] = {5, 20, 5, 30, 30, 20, 13, 10, 10, 20};
    vector<int> v(arr, arr + 8);
    vector<int>::iterator it;
    it = adjacent_find(v.begin(), v.end(), myfunction);
    if (it != v.end())
        cout << "Found: " << *it << endl;
    return 0;
}







//--------------------------------set_union,set_intersection,set_difference,set_symmetric_difference-------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first[] = {5, 10, 15, 20, 25};
    int second[] = {20, 10, 30, 40, 50};
    vector<int> v(10);
    vector<int>::iterator it;
    sort(first, first + 5);
    sort(second, second + 5);

    it = set_union(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    it = set_intersection(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    return 0;
}
//set_difference and set_symmetric_difference   (see yourself)








