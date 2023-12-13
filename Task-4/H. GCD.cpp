#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

ll gcd(ll a, ll b)
{
	if (a < b)
		swap(a, b);
	while (a != 0 && b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void solve()
{
    FAST
        ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}

int main()
{
    solve();
    return 0;
}