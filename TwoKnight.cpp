#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    LL n;
    cin >> n;

    cout << 0 << endl;
    for (LL i = 2; i <= n; i++)
    {
        cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << "\n";
    }

    return 0;
}