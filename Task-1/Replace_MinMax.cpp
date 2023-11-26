#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int, int> mn(INT_MAX, -1), mx(INT_MIN, -1);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx.first)
        {
            mx.first = arr[i];
            mx.second = i;
        }
        if (arr[i] < mn.first)
        {
            mn.first = arr[i];
            mn.second = i;
        }
    }
    arr[mn.second] = mx.first;
    arr[mx.second] = mn.first;
    for (int i = 0;i < n;i++)
        cout << arr[i] << " ";


}

int main()
{

    //try_code();
    solve();
    return 0;
}
