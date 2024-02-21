// Problem: G

#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fl for (int i = 0; i < n; i++)
#define tfl for (int i = 1; i <= t; i++)
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

void ann()
{
}

int main()
{
    FASTER
    ll t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        double overs = 0;
        ll balls = 0, runs = 0, wickets = 0;
        for (char ball : b)
        {
            if (ball == 'W')
            {
                wickets++;
                balls++;
            }
            else
            {
                ll run = ball - '0';
                runs += run;
                balls++;
                if (balls == 6)
                {
                    overs += 1.0;
                    balls = 0;
                }
            }
        }
        if (balls > 0)
        {
            overs += (static_cast<double>(balls) / 6);
        }
        if (overs > 1)
        {
            if ((balls > 0) || (runs > 1) || (wickets > 1))
            {
                cout << overs << " Over " << runs << " Runs " << wickets << " Wickets." << nl;
            }
            else
            {
                cout << overs << ".0 Overs " << runs << " Run " << wickets << " Wicket." << nl;
            }
        }
        else
        {
            cout << "0." << ll(overs * 10) << " Overs " << runs << " Runs " << wickets << " Wickets." << nl;
        }
    }
}
