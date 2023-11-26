#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    int ok = 1;
    for (int i = 0;i < n;i++)
    {
        if (a[i] != b[i])
        {
            ok = 0;
            break;
        }
    }
    if (ok)
        cout << "yes";
    else
        cout << "no";
}

int main()
{

    //try_code();
    solve();
    return 0;
}
