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