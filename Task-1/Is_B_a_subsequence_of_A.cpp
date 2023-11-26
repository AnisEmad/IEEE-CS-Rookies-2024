#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0;i < n;i++)
        cin >> a[i];
    for (int i = 0;i < m;i++)
        cin >> b[i];
    int j = 0;
    for (int i = 0;i < n;i++)
    {
        if (a[i] == b[j])
            j++;
        if (j == m)
            break;
    }
    if (j == m)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{

    //try_code();
    solve();
    return 0;
}
