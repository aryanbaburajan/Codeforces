#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    cout << max(a[n - 1] * a[n - 2], a[0] * a[1]) << endl;
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