#include <bits/stdc++.h>
using namespace std;

template <typename T>
std::ostream &operator<<(std::ostream &stream, const vector<T> &vec)
{
    for (auto &i : vec)
        stream << i << ' ';
    return stream;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n - 1);
    for (int &idx : b)
        cin >> idx;

    a[0] = b[0];
    for (int i = 1; i < n - 1; i++)
        a[i] = min(b[i - 1], b[i]);
    a[n - 1] = b[n - 2];

    cout << a << endl;
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