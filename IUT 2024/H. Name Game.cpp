#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
bool ok(string finalans)
{
    string s = "rafi";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        vector<string> xp;
        for (int j = 0; j < n; j++)
        {
            string ans = "";
            for (int k = i; k <= j; k++)
            {
                char x = s[k];
                ans += x;
            }
            xp.push_back(ans);
            for (auto x : xp)
            {
                if (finalans == x)
                    return true;
            }
        }
    }
    return false;
}

bool ok2(string finalans)
{
    string s = "sumaiya";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        vector<string> xp;
        for (int j = 0; j < n; j++)
        {
            string ans = "";
            for (int k = i; k <= j; k++)
            {
                char x = s[k];
                ans += x;
            }
            xp.push_back(ans);
            for (auto x : xp)
            {
                if (finalans == x)
                    return true;
            }
        }
    }
    return false;
}

bool ok3(string finalans)
{
    string s = "sakib";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        vector<string> xp;
        for (int j = 0; j < n; j++)
        {
            string ans = "";
            for (int k = i; k <= j; k++)
            {
                char x = s[k];
                ans += x;
            }
            xp.push_back(ans);
            for (auto x : xp)
            {
                if (finalans == x)
                    return true;
            }
        }
    }
    return false;
}
void solve()
{
    string s;
    getline(cin, s);
    for (char &c : s)
    {
        c = tolower(c);
    }
    reverse(all(s));
    cout << s << '\n';
    vector<string> v = {"rafi", "sumaiya", "sakib"};

    for (auto name : v)
    {
        for (int i = 0; i < name.size(); i++)
        {
            vector<string> ans;
            for (int len = 1; len <= name.size(); len++) // Check for substrings of length 1, 2, and 3
            {
                string substr = name.substr(i, len);
                ans.push_back(substr);
                // cout << substr << "\n";
            }
            int cnt = 0;
            for (auto x : ans)
            {
                cout << x << '\n';
                if (x == s)
                    cnt++;
            }
            cout << cnt << '\n';
            if (cnt > 0)
            {
                if (name == "rafi")
                {
                    cout << "sweet Girl" << '\n';
                    return;
                }
                else if (name == "sumaiya")
                {
                    cout << "she is nerd" << '\n';
                    return;
                }
                else if (name == "sakib")
                {
                    cout << "he is nerd" << '\n';
                    return;
                }
            }
        }
    }
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
