#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n << endl;
}
void solve()
{
    FAST
    int n;
    cin >> n;
    print(n);
}
int main()
{
    solve();
    return 0;
}
