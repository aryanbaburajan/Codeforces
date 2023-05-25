#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n), b(n);
    for (int &idx : a)
        cin >> idx;
    for (int &idx : b)
        cin >> idx;

    int maxIdx = -1;
    for (int i = 0; i < n; i++)
        if (t >= i + a[i])
            if (b[i] > b[maxIdx] || maxIdx == -1)
                maxIdx = i;

    cout << ((maxIdx != -1) ? maxIdx + 1 : -1) << endl;
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