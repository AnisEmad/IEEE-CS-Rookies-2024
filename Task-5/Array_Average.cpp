#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;
double arr_average(double arr[], ll len)
{
    if (len == 1)
        return arr[0];

    double sub_result = arr_average(arr, len - 1);
    sub_result = sub_result * (len-1);

    return (sub_result + arr[len - 1] ) / len;
}
void solve()
{
    ll n;
    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(6);
    cout << arr_average(arr, n);
}
int main()
{
    solve();
    return 0;
}
