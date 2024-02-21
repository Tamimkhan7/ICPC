#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s;
        int Over, Overr, W = 0, Run = 0;
        int len = s.size();
        Over = len / 6;
        Overr = len % 6;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'W')
                W++;
            else
            {
                Run += s[i] - '0';
            }
        }
        if (Over >= 1 && Overr > 0 && W > 1 && Run > 1)
        {
            cout << Over << "." << Overr << " Overs " << Run << " Runs " << W << " Wickets." << endl;
        }
        else if (Over >= 1 && Overr > 0 && W <= 1 && Run <= 1)
        {
            cout << Over << "." << Overr << " Overs " << Run << " Run " << W << " Wicket." << endl;
        }
        else if (Over >= 1 && Overr > 0 && W > 1 && Run <= 1)
        {
            cout << Over << "." << Overr << " Overs " << Run << " Run " << W << " Wickets." << endl;
        }
        else if (Over >= 1 && Overr > 0 && W <= 1 && Run > 1)
        {
            cout << Over << "." << Overr << " Overs " << Run << " Runs " << W << " Wicket." << endl;
        }
        else if (Over <= 1 && Overr >= 0 && W > 1 && Run > 1)
        {
            cout << Over << "." << Overr << " Over " << Run << " Runs " << W << " Wickets." << endl;
        }
        else if (Over <= 1 && Overr >= 0 && W <= 1 && Run > 1)
        {
            cout << Over << "." << Overr << " Over " << Run << " Runs " << W << " Wicket." << endl;
        }
        else if (Over <= 1 && Overr >= 0 && W > 1 && Run <= 1)
        {
            cout << Over << "." << Overr << " Over " << Run << " Run " << W << " Wickets." << endl;
        }
        else if (Over <= 1 && Overr >= 0 && W <= 1 && Run <= 1)
        {
            cout << Over << "." << Overr << " Over " << Run << " Run " << W << " Wicket." << endl;
        }
    }
    return 0;
}