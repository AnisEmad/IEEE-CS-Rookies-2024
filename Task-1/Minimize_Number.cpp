#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
            arr[i] = arr[i] / 2;
        else
            break;
        if (i == n - 1) cnt++, i = 0;
    }
    cout << cnt;


}

int main()
{

    //try_code();
    solve();
    return 0;
}
