#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt;

        cin >> n;
        int arr[n];

        cnt = n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                if (arr[j]  < arr[j + 1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << cnt << "\n";
    }
}

int main()
{

    //try_code();
    solve();
    return 0;
}
