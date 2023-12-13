#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

void solve()
{
    FAST
    ll t, n, x1, y1, x2, y2;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        cin >> n >> x1 >> y1 >> x2 >> y2;
        ll m1 = x1, m2 = y1, m3 = x2, m4 = y2;
        for(int i = 1; i < n; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            m1 = max(m1, x1);
            m2 = max(m2, y1);
            m3 = min(m3, x2);
            m4 = min(m4, y2);
        }
        cout << "Case #" << j << ": ";
        if(m3 > m1 && m4 > m2)
        {
            cout<< (m3 - m1) * (m4- m2);
        }
        else
        {
            cout << 0;
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}