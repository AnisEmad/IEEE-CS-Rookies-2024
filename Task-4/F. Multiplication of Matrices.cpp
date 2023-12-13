#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

void solve()
{
    FAST
    ll r1, c1, r2, c2;

    cin >> r1 >> c1;
    ll mat1[r1][c1];

    for(int i = 0;i < r1;i++)
        for(int j = 0;j < c1;j++)
            cin >> mat1[i][j];

    cin >> r2 >> c2;
    ll mat2[r2][c2];
 
    for(int i = 0;i < r2;i++)
        for(int j = 0;j < c2;j++)
            cin >> mat2[i][j];

    ll mat3[r1][c2];
    memset(mat3,0,sizeof(mat3));
    for(int i = 0;i<r1;i++)
        for(int j = 0;j<c2;j++)
            for(int k = 0;k<c1;k++)
                mat3[i][j] += mat1[i][k]*mat2[k][j];

    for(int i = 0;i<r1;i++)
    {
        for(int j = 0;j<c2;j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}