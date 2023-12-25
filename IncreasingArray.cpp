#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int n;
    cin >> n;

    LL prev, now, ans = 0;
    cin >> prev;
    for(int i = 1; i < n; ++i)
    {
        cin >> now;
        if(now < prev) ans += prev - now;
        else prev = now;
    }
    
    cout << ans;
    return 0;
}