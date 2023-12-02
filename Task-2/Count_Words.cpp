#include <iostream>
#include <bits/stdc++.h>
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string ss;
    int cnt = 0;
    getline(cin, ss);
    ss += ' ';
    int i = 0;
    bool found = false;
    while (i < ss.size())
    {
        if (isalpha(ss[i]))
            found = true;
        if ((ss[i] == ' '  || ss[i] == '!' || ss[i] == '.' || ss[i] == '?' || ss[i] == ',') && found)
        {
            cnt++;
            found = false;
        }
        i++;
    }
    cout << cnt << endl;


    return 0;
}
