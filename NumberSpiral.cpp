#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    while(n--)
    {
        LL x, y;
        cin >> y >> x;
        if (x < y)
        {
            if (y % 2 == 0)
            {
                cout << (y * y - y + 1) + (y - x) << "\n";
            }
            else
            {
                cout << (y * y - y + 1) - (y - x) << "\n";
            }
        }   
        else if (x > y)
        {
            if (x % 2 == 0)
            {
                cout << (x * x - x + 1) - (x - y) << "\n";
            }
            else
            {
                cout << (x * x - x + 1) + (x - y) << "\n";
            }
        }   
        else cout << x * x - x + 1 << "\n"; 
    }
    return 0;
}