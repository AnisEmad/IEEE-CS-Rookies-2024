#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

ll f(ll a, ll b,ll q)
{
    if(q == 1)
        return a;
    if(q == 2)
        return b;
    if(q%3 == 0)
        return (a^ b);
    else if((q+1)%3 == 0)
        return b;
    else
        return a;
}

void solve()
{
    FAST
    ll a, b, q;
    cin >> a >> b >> q;
    cout << f(a, b ,q) << endl;
}

int main()
{
    solve();
    return 0;
}