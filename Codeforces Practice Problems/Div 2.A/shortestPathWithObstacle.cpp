#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> a(2), b(2), f(2);

        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> f[0] >> f[1];

        int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);

        if ((a[0] == b[0] && a[0] == f[0] && min(a[1], b[1]) < f[1] && f[1] < max(a[1], b[1])) || (a[1] == b[1] && a[1] == f[1] && min(a[0], b[0]) < f[0] && f[0] < max(a[0], b[0])))
            ans += 2;

        cout << ans << endl;
    }

    return 0;
}
