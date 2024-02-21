#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, p, y, q, a, b;
        cin >> x >> p >> y >> q;
        int sum = 0, sum2 = 0;
        while (n--)
        {
            p -= x;
            sum += p;
            q -= y;
            sum2 += q;
        }
        cout << sum << " " << sum2 << endl;
        int c = min(sum, sum2);
        cout << c << endl;
    }
}