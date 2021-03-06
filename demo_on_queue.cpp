#include <queue>
#include <iostream>
using namespace std;
void printQ(queue<int> q)
{
     while (!q.empty())
     {
          cout << q.front() << " ";
          q.pop();
     }
     cout << endl;
}
queue<int> removeMultipleOf3(queue<int> q)
{
     queue<int> mq;
     while (!q.empty())
     {
          if (q.front() % 3 != 0)
               mq.push(q.front());
          q.pop();
     }
     return mq;
}
int main()
{
     queue<int> q1;

     for (int i = 1; i < 100; i += 10)
     {
          q1.push(i);
     }
     //   cout<<q1.size();
     printQ(q1);
     printQ(q1);
     q1 = removeMultipleOf3(q1);
     printQ(q1);

     return 0;
}