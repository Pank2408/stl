#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

void TicTacToe()
{
    int gridSize, x, y;
    char c;
    cin >> gridSize;
    // In diff arrays we are storing the difference
    // between the number of X's and O's i.e. |x|-|o|
    vector<int> diffRows(gridSize, 0);
    vector<int> diffCols(gridSize, 0);
    int diffDiag1 = 0, diffDiag2 = 0;
    int winnerFound = 0; // 1-X,2-O,0-no winner
    for (int i = 0; i < gridSize * gridSize; i++)
    {
        cin >> x >> y >> c;
        if (c == 'X')
        {
            diffRows[x - 1]++;
            diffCols[y - 1]++;
            if (x == y)
                diffDiag1++;
            if (x + y == gridSize + 1)
                diffDiag2++;
        }
        else
        {
            diffRows[x - 1]--;
            diffCols[y - 1]--;
            if (x == y)
                diffDiag1--;
            if (x + y == gridSize + 1)
                diffDiag2--;
        }
        if (diffRows[x - 1] == gridSize || diffRows[y - 1] == gridSize)
            winnerFound = 1;
        if (diffRows[x - 1] == -gridSize || diffRows[y - 1] == -gridSize)
            winnerFound = 2;
        if (diffDiag1 == gridSize || diffDiag2 == gridSize)
            winnerFound = 1;
        if (diffDiag1 == -gridSize || diffDiag2 == -gridSize)
            winnerFound = 2;
        if (winnerFound)
            break;
    }
    if (winnerFound == 1)
        cout << "hurre X is the Winner!" << endl;
    if (winnerFound == 2)
        cout << "hurre O is the Winner!" << endl;
    if (winnerFound == 0)
        cout << "Draw" << endl;
}
int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "test #" << i << ": ";
        string s;
        cin >> s;
    }
    return 0;
}