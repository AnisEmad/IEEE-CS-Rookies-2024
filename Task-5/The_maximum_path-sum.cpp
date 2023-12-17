#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;
int row, col;
int mat[10][10];
ll max_path(int i, int j)
{
    if (i == row - 1 && j == col - 1)
    {
        return mat[i][j];
    }else if (i == row + 1 || j == col + 1)
    {
        return -1000000;
    }

    int right = max_path(i, j + 1);
    int down = max_path(i + 1, j);
    return mat[i][j] + max(right, down);
}
void solve()
{
    FAST
    cin >> row >> col;
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << max_path(0, 0);


}
int main()
{
    solve();
    return 0;
}
