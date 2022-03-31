#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int P(int k, int i, int pos)
{
    return (k+1-(pos-i));
}

void solve()
{
    int N, k, pos = 0,n=0;
    string s;
    cin >> N >> k;
    cin >> s;
    queue<int> I;
    queue<int> M;
    for(char c : s)
    {
        if(c == 'I')
            {
                pos++;
                if(!M.empty()){
                while(!M.empty())
                {
                 int i = M.front();   M.pop();
                 int p = P(k, i, pos);
                 if(p > 0)
                    {n++;  break;}
                }
                }
                else
                {
                I.push(pos);
                }
            }
        else if(c == 'M')
            {
                pos++;
                if(!I.empty()){
                while(!I.empty())
                {
                 int i = I.front();   I.pop();
                 int p = P(k, i, pos);
                 if(p > 0)
                    {n++;  break;}  
                }
                }
                else
                {
                M.push(pos);
                }
            }
        else if(c == ':')
                pos += 2;
        else if(c == 'X')
        {
            pos++;
            while(!M.empty()) M.pop();
            while(!I.empty()) I.pop();
        }
        else
            pos++;
    }
    cout << n << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
