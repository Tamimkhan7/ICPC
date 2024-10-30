#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int run = 0, wicket = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                wicket++;
            else
            {
                char ch = s[i];
                int x = ch - '0';
                run += x;
            }
        }
        int ball = n / 6;
        int extra_ball = n % 6;

        if (ball >= 1 and extra_ball > 0)
            cout << ball << "." << extra_ball << " Overs ";
        else
            cout << ball << "." << extra_ball << " Over ";

        if (run > 1)
            cout << run << " Runs ";
        else
            cout << run << " Run ";
        if (wicket > 1)
            cout << wicket << " Wickets." << '\n';
        else
            cout << wicket << " Wicket." << '\n';
p0
        // cout << n << ' ' << run << ' ' << wicket << '\n';
    }
    return 0;
}