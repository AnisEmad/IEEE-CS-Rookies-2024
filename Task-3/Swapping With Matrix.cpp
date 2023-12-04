#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
void func(int *rows,int *cols,int x,int y){
    swap(rows[x-1],rows[y-1]);
    swap(cols[x-1],cols[y-1]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n][n];
    int rows[n],cols[n];
    for(int i = 0;i<n;i++){
        rows[i] = i;
        cols[i] = i;
        for(int j = 0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    func(rows,cols,x,y);

    /*for(int i = 0;i <n;i++){
        cout << rows[i] << " : " << cols[i] << endl;
    }*/
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << arr[rows[i]][cols[j]] << " ";
        }
        cout << endl;
    }

    return 0 ;
}