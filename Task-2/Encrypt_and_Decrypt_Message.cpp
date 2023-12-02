#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n;
    cin >> n;
    string str;
    cin >> str;
    int len = str.size();
    if (n == 1)
    {
        for (int i = 0; i < len; i++)
        {
            int pos = Original.find(str[i]);

            str[i] = Key[pos];
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            int pos = Key.find(str[i]);
            str[i] = Original[pos];
        }
    }
    cout << str << endl;
    return 0;
}
