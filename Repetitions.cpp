#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int best = 1, length = 1;
    for(int i = 1; i < s.length(); ++i)
    {
        if(s[i] == s[i - 1]) length++;
        else length = 1;
        best = max(best, length);
    }
    cout << best;
    return 0;
}