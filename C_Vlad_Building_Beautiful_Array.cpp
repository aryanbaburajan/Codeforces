#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        if (inp % 2)
            odd.push_back(inp);
        else
            even.push_back(inp);
    }

    int oddP = 0, evenP = 0;
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for (int &e : even)
    {
        evenP++;
        if (odd.size() > 0)
            if (e - odd[0] > 0)
                oddP++;
    }

    for (int &o : odd)
    {
        oddP++;
        if (odd.size() > 0)
            if (o - odd[0] > 0)
                evenP++;
    }

    if (oddP == n || evenP == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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