#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
        cout << "1" << endl;
    else if (n % 2)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < n; i++)
            if (i % 2)
                cout << i << " ";
            else
                cout << n - i << " ";
        cout << endl;
    }
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