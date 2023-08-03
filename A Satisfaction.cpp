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
        string s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] < s[i + 1])
            {
                swap(s[i], s[i + 1]);
                swap(arr[i], arr[i + 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
            cout << arr[i] << " ";
        }
    }
}