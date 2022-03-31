#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

void PenaltyShootOut()
{
    int chances;
    cin >> chances;
    // How many chances each team has
    int winnerFound = 0; // 1-A,2-B,0-No winner
    int cA = chances, cB = chances;
    char goal, team;
    int diffGoals = 0; //  |A|-|B|
    for (int i = 0; i < 2 * chances; i++)
    {
        cin >> goal >> team;
        if (team == 'A')
        {
            cA--;
            if (goal == 'G')
            {
                diffGoals++;
            }
        }
        else
        {
            cB--;
            if (goal == 'G')
            {
                diffGoals--;
                if (-1 * diffGoals > cA)
                    winnerFound = 2;
            }
        }
        if (diffGoals > cB)
            winnerFound = 1;
        // cout<<winnerFound<<diffGoals<<endl; for debugger
        if (winnerFound)
            break; // if we found a winner at any pt. in time we will break
    }
    if (winnerFound == 1)
        cout << " A is the Winner!" << endl;
    if (winnerFound == 2)
        cout << "B is the Winner!" << endl;
    if (winnerFound == 0)
        cout << "Draw" << endl;
}
int main()
{
    /* int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "test #" << i << ": ";
        string s;
        cin >> s;
    } */
    PenaltyShootOut();
    return 0;
}