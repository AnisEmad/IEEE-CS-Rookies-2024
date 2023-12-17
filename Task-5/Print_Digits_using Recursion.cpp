#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

void print_digits(ll n)
{
    if (n == 0)
        return;
    print_digits(n/10);
    cout << n%10 << " ";
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
        if (n == 0)
            cout << 0;
        else
            print_digits(n);
        cout << endl;
    }


}
int main()
{
    solve();
    return 0;
}
