// #include <bits/stdc++.h>

// using namespace std;

// bool checking[2*1000000] = {false};
// int main()
// {
//     int n;
//     cin >> n;

//     int tmp;
//     for(int i = 1; i < n; ++i)
//     {
//         cin >> tmp;
//         checking[tmp] = true;
//     }
//     for(int i = 1; i <= n; ++i)
//     {
//         if(checking[i] == false) 
//         {
//             cout << i;
//             break;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n;
    cin >> n;
    ll sm = 0, x;
    for (int i = 0; i < n - 1; i++) cin >> x, sm += x;
    cout << (n * (n + 1) / 2) - sm;
}
 
signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    solve();
}