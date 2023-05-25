#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;

    int as = max(max(sx - n / 2, sy - n / 2), max(n / 2 - sx, n / 2 - sy) + 1);
    int ae = max(max(ex - n / 2, ey - n / 2), max(n / 2 - ex, n / 2 - ey) + 1);

    cout << abs(ae - as) << endl;
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