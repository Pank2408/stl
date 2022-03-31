#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a);i<(b);i++)

class comp{
     public:
          bool operator() (const pi &a,const pi &b){
              return a.S<b.S;
          }

};

int main(){
    set<int> s1;
    s1.insert(4);
    s1.insert(1);
    s1.insert(5);
    set<int>:: iterator it;
     for(it=s1.begin();it!=s1.end();it++)
         cout<<*it<<" ";
    cout<<endl;
     s1.insert(1);
     for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
     s1.erase(5);//direct value 5 delete ho gya(iterator se bhi delete kr sakte hai but generaly iterator is use when delete from renj)
     for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" "  ;
    cout<<endl;
     it=s1.find(4);
      s1.erase(s1.begin(),it);
    for(it=s1.begin();it!=s1.end();it++)
       cout<<*it<<" ";
     cout<<endl;
     //set<pi> s2(isse to first vale value increasing order me hoyenge)
    set<pi,comp> s2;//now arranged based on there second value
    s2.insert(mp(1,2));
    s2.insert(mp(0,3));
    s2.insert(mp(0,0));
    s2.insert(mp(5,1));
    set<pi>:: iterator it2;//pair wala iterator bnana pdega
     for( it2=s2.begin(); it2!=s2.end(); ++it2) 
    { 
        cout<< it2->F<<" "<< it2->S <<endl; 
    } 

        

    return 0;
}
//since we r using implemnt bst it takes o(logn) time
//now u can do anything like set of vectors also and arrange them based on their first or second vlaue