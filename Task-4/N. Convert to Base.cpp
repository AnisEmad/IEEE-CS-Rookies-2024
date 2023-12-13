#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

int to_num(char base)
{
    if (isdigit(base))
        return base - '0';
    else
        return base - 'A' + 10;
}
ll from_base_x_to_decimal(string num,int base)
{
    ll sum = 0;
    ll power = 1;
    for (ll idx = num.length() - 1; idx >= 0; idx--)
    {
        sum += to_num(num[idx]) * power;
        power *= base;
    }
    return sum;
}
string from_decimal_to_x_base(ll num, ll base)
{
    string ans = "";
    while (num > 0)
    {
        int x = num % base;
        ans += (x < 10) ? (char)(x + '0') : (char)(x - 10 + 'A');
        num /= base;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

void solve()
{
    FAST
    int type;
    cin >> type;
    if (type == 1)
    {
        string num;
        int x;
        cin >> num >> x;
        cout << from_base_x_to_decimal(num, x) << endl;
    }
    else
    {
        ll num, x;
        cin >> num >> x;
        cout << from_decimal_to_x_base(num, x) << endl;
    }
}

int main()
{
    solve();
    return 0;
}