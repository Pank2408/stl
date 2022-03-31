#include<bits/stdc++.h>
using namespace std;
int main(){
      int temp,n,sum;
      cin>>n;
      while(n>0){  
          
          n/=10;
          sum=sum-n;
      }
      cout<<sum;


    return 0;
}