#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else return fib(n - 1) + fib(n - 2);
}
void solve()
{
    int n;
    cin >> n;
    cout << fib(n);
}
int main()
{
    solve();
    return 0;
}
