#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

string sum(string n, string m)
{
    int len1 = n.length(), len2 = m.length();
    string zeros = "";
    string result = "";
    for (int i = 0;i < abs(len1 - len2);i++)
        zeros += '0';
    if (len1 < len2) n = zeros + n, len1 = len2;
    else m = zeros + m, len2 = len1;
    int carry = 0;
    for (int i = len1 - 1;i >= 0; i--)
    {
        int x = n[i] - '0';
        int y = m[i] - '0';
        int sum = x + y + carry;
        carry = sum / 10;
        sum = sum%10;
        result += sum + '0';
    }
    reverse(result.begin(), result.end());
    if (carry)
        {
            char x = carry + '0';
            result = x + result;
        }
    return result;
}
string mul(string n)
{
    int t = 9998;
    string result = n;
    while (t--)
    {
        result = sum(n, result);
    }
    return result;
}
void solve()
{
    FAST
    string n;
    cin >> n;
    string res = sum(n, "9999");
    string res2 = mul(n);
    cout << res << endl << res2 << endl;
}
 
int main()
{
    solve();
    return 0;
}