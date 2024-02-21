#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fl for (ll i = 0; i < n; i++)
#define nfl for (ll i = 0; i <= n; i++)
#define tfl for (ll i = 1; i <= t; i++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const lld pi = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
const ll mod = 1e9 + 7;

/*=====================================================

========================================================*/

ll ann(ll i, ll a)
{
    ll ra = i % a;
    ll ra1 = i % (a - 1);
    return abs(ra - ra1);
}

int main()
{
    FASTER
    ll t;
    cin >> t;
    tfl
    {
        ll a, n;
        cin >> a >> n;
        ll sum = 0;
        nfl
        {
            sum += ann(i, a);
        }
        cout << "Case " << i << ": " << sum << nl;
    }
}