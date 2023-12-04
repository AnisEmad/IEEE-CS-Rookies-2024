#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
void print(int arr[], int arr2[], int s){
    for (int i = 0; i < s; i++){
        cout << arr2[i] << " ";
    }
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int s;
    cin >> s;
    int arr1[s];
    int arr2[s];
    for (int i = 0; i < s; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < s; i++){
        cin >> arr2[i];
    }
    print(arr1, arr2, s);
    return 0;
}