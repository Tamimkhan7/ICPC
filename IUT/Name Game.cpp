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
        if (s.size() == 1)
        {
            if (s[0] < 'z')
                cout << 'z' << '\n';
            else if (s[0] > 'a')
                cout << 'a' << '\n';
        }
        else
        {
            s.pop_back();
            cout << s << '\n';
        }
        // string ans = "";
        // for (int l = 0, r = s.size() - 1; l < r; l++, r--)
        //     ans += s[r], ans += s[l];

        // cout << ans << '\n';
    }
    return 0;
}