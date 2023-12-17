#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

int reach_value(ll n, ll value)
{
    if (n > value)
        return 0;
    if (n == value)
        return 1;
    return reach_value(10 * n, value) || reach_value(20 * n, value);
}
void solve()
{
    FAST
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (reach_value(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    solve();
    return 0;
}
