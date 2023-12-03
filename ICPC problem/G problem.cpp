#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
bool subsett(vector<ll> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    ll ct = 0;
    for (int i = 0; i < (v.size() - 1); i++)
    {
        if (v[i] != v[i + 1])
        {
            ct++;
            if (ct > 0)
                break;
        }
    }
    if (ct != 0)
        return true;
}

int main()
{
    faster;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        // find the subset using bitmask operator
        for (int mask = 0; mask < (1 << n); mask++)
        {
            vector<ll> v;
            // all subset generated from the array
            for (int j = 0; j < n; j++)
            {
                if ((mask >> j) & 1)
                {
                    v.pb(a[j]);
                }
            }
            // cout << v.size() << endl;
            if (v.size() > 1)
            {
                if (subsett(v) == true)
                {
                    ans++;
                }
            }
        }
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}