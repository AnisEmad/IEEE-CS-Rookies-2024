#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ld long double

using namespace std;

void solve()
{
    FAST
    ld x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
 
    ld cx1 = (x1 + x2) / 2, cy1 = (y1 + y2) / 2;
    ld cx2 = (x3 + x4) / 2, cy2 = (y3 + y4) / 2;
    
    ld r1 = sqrt(pow(cx1 - x1, 2) + pow(cy1 - y1, 2)); 
    ld r2 = sqrt(pow(cx2 - x3, 2) + pow(cy2 - y3, 2));
 
    ld d =  sqrt(pow(cx2 - cx1, 2) + pow(cy2 - cy1, 2));
 
    if(d <= r1 + r2)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    solve();
    return 0;
}