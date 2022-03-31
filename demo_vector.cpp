#include<iostream>
#include<vector>
using namespace std;


int main(){
     vector<int> a;//empty vector 'a' size and capacity is 0      
//    a[0]=2;//a doesn't have any thing right now,this is incorrect(i.e.segmentation fault)
     a.push_back(2);
     vector<int> b(a);
     b[0]=6;
    // vector<char> c(a);  compile time error
    vector<char> c(5,66);
    vector<int> d(a.begin(),a.end());//d={2}
    d.push_back(5);
    //d={2,5} , a={2} , c={'B','B','B','B','B'}, b={6};
    //cout<<a.at(1); exception
     
//     cout<<(a<d);//lexicographic order(i.e. alphabeticaly) its true
    vector<int> v(10);
    for(int i=0;i<10;i++)
       v[i]=i+1;
//     cout<<v.at(6);
 //    cout<<v.back();
//v={1,2,3,....,10}
    vector<int> v1(v);
    v.clear();//memory is still there but the vector become empty
//     cout<<"v.size()= "<<v.size()<<endl;
//     cout<<"v.capacity()= "<<v.capacity()<<endl;
    //cout<<v[0]<<endl; still output is 1
   // cout<<v.at(0); exception
//    cout<<v.empty()<<endl;
  
  //iterators
     v=v1;
    /*  for(int i=0;i<v.size();i++)
         cout<<v[i]<<" "; */

    // vector<int>::iterator it;
    /*  for ( it = v.begin(); it!=v.end(); it++)
     {
         cout<<*it<<" ";
     } */
      
    vector<int>::reverse_iterator it;
      for(it=v.rbegin();it!=v.rend();it++)
          cout<<*it<<" ";
     
     
    
     return 0;
}
//clear doesn't clear the memory,doesn't delete the memory
//size<=capacity
//size denotes how many elements currently present in the vector
//capacity is amt of memory i.e. allocated to this vector
//just by seeing the syntax u can infer many things