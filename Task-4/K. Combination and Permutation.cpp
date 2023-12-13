#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

unsigned ll nCr(int n, int r)
{
    if (r > n)
        return 0;
    r = max(r, n - r);
    unsigned ll ans = 1, div = 1, i = r + 1;
    while (i <= n)
    {
        ans *= i;
        i++;
        ans /= div;
        div++;
    }
    return ans;
}

unsigned ll nPr(int n, int r)
{
    if (r > n)
        return 0;
    unsigned ll p = 1, i = n - r + 1;
    while (i <= n)
        p *= i++;
    return p;
}

void solve()
{
    FAST
    ll a, b;
    cin >> a >> b;
    cout << nCr(a, b) << " " << nPr(a, b) << endl;
}

int main()
{
    solve();
    return 0;
}