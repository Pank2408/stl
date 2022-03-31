#include<queue>
#include<iostream>
using namespace std;
template<class T>
void display(deque<T> q){
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop_front();
   }
   cout<<endl;
   
}
int main(){
   deque<int> q;
   q.push_back(1);
   q.push_back(2);
   q.push_back(3);
    display(q);
cout<<endl;
   for(int i=10;i<40;i+=10)
      q.push_front(i);
    cout<<q.size()<<endl;
    display(q);
   //  deque<string> q2({"abc","def","gh"});
   //  display(q2);
 deque<int>:: iterator it =q.begin();
 //stack using deque
 deque<int> s;
 s.push_back(1);
 s.push_back(2);
 s.push_back(3);
   // display(s);
   while(!s.empty()){
      cout<<s.back()<<" ";
      s.pop_back(); 
   }


   
 
    return 0;
}
// random access iterator for deque works as vector likeˆ
//all the functionality vector,queues ,stack everything is embedded in this one double ended queue(deque)