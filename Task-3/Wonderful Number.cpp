#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
bool isOdd(int n){
    if(n%2)
        return true;
    return false;
}
bool change(int n){
    int bin[100];
    int countt = 0;
    for(int i = 0;n > 0;i++){
        bin[i] = n%2;
        n = n/2;
        countt++;
    }
    int mid = countt/2;
   for(int j = countt-1,i = 0; j >= mid;j--,i++){
        if(!(bin[i] == bin[j])){
            return false;
        }
   }
    return true;
}
void wonderful(int n){
    if(!isOdd(n)){
        cout << "NO" << endl;
        return;
    }
    if(change(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int t;
    cin >> t;
    wonderful(t);
    return 0 ;
}