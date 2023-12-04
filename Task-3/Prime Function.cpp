#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
bool prime_aux(const int i, const int d)
{
    if (d == 1) return true;
    if (i % d == 0) return false;
    return prime_aux(i, d - 1);
}
bool prime(const int i)
{
    return prime_aux(i, i-1);
}

bool ultimateprime(int n){
    if(n == 2 || n == 3)
        return true;
    if(n <= 1 || n%2 == 0)
        return false;
    for(int i = 3;i*i <= n;i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int t;
    cin >> t;
    int x;
    while(t--)
    {
        cin >> x;
        if(ultimateprime(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0 ;
}