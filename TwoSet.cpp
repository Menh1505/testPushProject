#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll d = n*(n - 1)/2 + n;
    if ((d/2) * 2 == d )
    {
        cout << "YES\n";
        d /= 2;
        deque<ll> de1, de2;
        ll s1 = 0, i = 1;
        
        while(s1 < d)
        {
            de1.push_back(i);
            s1 += i;
            i++;
        }
        while(s1 > d)
        {   
            de2.push_back(de1.front());
            s1 -= de1.front();
            de1.pop_front();
        }
        while(i <= n)
        {
            de2.push_back(i);
            i++;
        }
        cout << de1.size() << "\n";
        while(!de1.empty())
        {
            cout << de1.front() << " ";
            de1.pop_front();
        }
        cout << "\n";
        cout << de2.size() << "\n";
        while(!de2.empty())
        {
            cout << de2.front() << " ";
            de2.pop_front();
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
