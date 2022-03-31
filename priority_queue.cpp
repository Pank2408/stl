#include<queue>
#include<iostream>
using namespace std;

template<class T>
void display(priority_queue<T> q){//we havenot passed by reference here
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
void display(priority_queue<char,vector<char>,greater<char> > q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
class  Compare{
    public:
       bool operator() (int a,int b){
           return a>b;
        //   return (a%3 > b%3);//the elements which have smaller value of modulo 3 will have higher priority
       }
};
void display(priority_queue<int,vector<int>,Compare > q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
      priority_queue<int> q1;
      for(int i=1;i<10;i++)
         q1.push(i);
      display(q1);
      display(q1);//if i had passed by reference then nothing will be printed
      
      priority_queue<string> q2;
      q2.push("ab");
      q2.push("xy");
      q2.push("bd");
      q2.push("aa");
      q2.push("AA");
      display(q2);

      priority_queue<char,vector<char>,greater<char> > q3;//it's now minheap,and it work as function now also
        q3.push('a');q3.push('x');
        q3.push('b');q3.push('s');
        display(q3); 

    priority_queue<int,vector<int>,Compare > q4;
    q4.push(10);q4.push(5);
    q4.push(20);q4.push(2);
     display(q4);
    return 0;
}