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