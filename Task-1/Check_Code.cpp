#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    int ok = 1;
    for (int i = 0;i < a + b + 1;i++)
    {
        if (str[i] != '-' && i == a)
        {
            ok = 0;
            break;
        }
        else if ((!(str[i] >= 48 && str[i] <= 57)) && i != a)
        {
            ok = 0;
            break;
        }
    }
    if (ok)
        cout << "Yes";
    else
        cout << "No";


}

int main()
{

    //try_code();
    solve();
    return 0;
}
