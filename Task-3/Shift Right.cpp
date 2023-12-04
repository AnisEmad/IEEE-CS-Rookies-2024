#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
void shift(int arr[],int len,int times){
    while(times--){
        int rep = arr[len-1];
        for(int i = len-1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = rep;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int len,times;
    cin >> len >> times;
    int arr[len];
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }
    shift(arr, len, times);
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    return 0;
}