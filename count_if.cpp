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