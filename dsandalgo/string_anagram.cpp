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

int NumAnagrams(vector<string> myString, string word)
{
    unordered_map<char, int> fw; // frequency map of "word"
    for (char c = 'a'; c <= 'z'; c++)
        fw[c] = 0;
    for (auto c : word)
        fw[c]++;

    unordered_map<char, int> fs;
    int noAnagrams = 0;
    // frequency map of strings in "myString"
    for (auto s : myString)
    {
        for (char c = 'a'; c <= 'z'; c++)
            fs[c] = 0;
        for (auto c : s)
            fs[c]++;
        // compaire fs and fw

        bool flag = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (fw[c] != fs[c])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            noAnagrams++;
    }
    return noAnagrams;
}
int main()
{
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        cout << "Case #" << i << ": ";
        //   NumAnagrams()
    }
    return 0;
}