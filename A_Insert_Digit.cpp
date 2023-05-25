#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char d;
    cin >> n >> d;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (int(s[i]) < int(d))
        {
            cout << s.substr(0, i) + d + s.substr(i, n - i) << endl;
            return;
        }
    }

    cout << s + d << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 2;
    cin >> t;

    while (t--)
        solve();
    return 0;
}