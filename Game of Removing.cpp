#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
vector<vector<int>> subsequence(int a[], int n)
{
    vector<vector<int>> v;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
                ans.push_back(a[i]);
        }
        v.push_back(ans);
    }
    return v;
}
vector<vector<int>> subarrayans(int b[], int n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> ans;
            for (int k = i; k <= j; k++)
                ans.push_back(b[k]);
            v.push_back(ans);
        }
    }
    return v;
}
int32_t
main()
{
    MTK;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<vector<int>> x = subsequence(b, n);
        vector<vector<int>> y = subarrayans(a, n);
        int finalres = 0;
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0; j < y.size(); j++)
            {
                if (x[i] == y[j])
                {
                    int size = x[i].size();
                    if (finalres < size and size > 1)
                        finalres = size;
                }
            }
        }
        cout << "Case " << tc << ": " << n - finalres << '\n';
    }
}