#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

int TimeToType(string keyboard, string text)
{
    /*return the time taken to type text
     *using the keyboard given the constraints in question
     */
    unordered_map<char, int> pos;
    for (int p = 0; p < keyboard.length(); p++)
        pos[keyboard[p]] = p; // storing position of each character
    int prevPos = 0, time_to_type = 0;
    for (char c : text)
    {
        time_to_type += abs(pos[c] - prevPos);
        // adding time taken to move to "c" from prevPos to final answer
        prevPos = pos[c];
    }
    return time_to_type;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "Case #" << i << ":";
        string a, b;
        cin >> a >> b;
        cout << TimeToType(a, b);
    }
    return 0;
}