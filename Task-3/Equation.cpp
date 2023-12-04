#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
ll power(ll num1, ll num2){
    num2--;
    ll temp = num1;
    while(num2--){
        num1 *= temp;
    }
    return num1;
}
ll equation(ll num1, ll num2){
    if (num2%2)
        num2--;
    int x = 2;
    ll equ = 0;
    while(x <= num2){
        equ += power(num1, x);
        x += 2;
    }
    return equ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    ll x, y;
    cin >> x >> y;
    cout << equation(x, y);
    return 0 ;
}