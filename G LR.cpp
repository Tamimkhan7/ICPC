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
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int res, rem;
        res = len / 6;
        rem = len % 6;
        int wcount = 0;
        int run = 0;
        string p;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W')
            {
                wcount++;
            }
            else
            {
                p = s[i];
                run += stoi(p);
            }
        }
        if (res > 0 && run > 1 && wcount > 1)
        {
            cout << res << "." << rem << " Overs " << run << " Runs " << wcount << " Wickets." << endl;
        }
        else if (res > 0 && run <= 1 && wcount < 1)
        {
            cout << res << "." << rem << " Overs " << run << " Run " << wcount << " Wicket." << endl;
        }
        else if (res <= 1 && run > 1 && wcount > 1)
        {
            cout << res << "." << rem << " Over " << run << " Runs " << wcount << " Wickets." << endl;
        }
        else if (res <= 1 && run <= 1 && wcount > 1)
        {
            cout << res << "." << rem << " Over " << run << " Run " << wcount << " Wickets." << endl;
        }
        else if (res > 0 && run > 1 && wcount < 1)
        {
            cout << res << "." << rem << " Overs " << run << " Runs " << wcount << " Wicket." << endl;
        }
        else if (res <= 1 && run < 1 && wcount > 1)
        {
            cout << res << "." << rem << " Over " << run << " Run " << wcount << " Wickets." << endl;
        }
        else if (res <= 1 && run > 1 && wcount <= 1)
        {
            cout << res << "." << rem << " Over " << run << " Runs " << wcount << " Wicket." << endl;
        }
        else
        {
            cout << res << "." << rem << " Over " << run << " Run " << wcount << " Wicket." << endl;
        }
    }
    return 0;
}