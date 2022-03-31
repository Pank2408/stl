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