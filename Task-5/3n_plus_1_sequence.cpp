#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

ll n_1(ll n){
	if(n == 1)
		return 1;
	if(n%2 == 0)
		return 1 + n_1(n / 2);
	else
		return 1 + n_1(3 * n + 1);
}
void solve()
{
    ll n;
	cin >> n;
	cout << n_1(n);
}
int main()
{
    solve();
    return 0;
}
