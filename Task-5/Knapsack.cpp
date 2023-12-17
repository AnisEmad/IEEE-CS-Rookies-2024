#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();
#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

int knap_sack(int w,int weight[], int value[], int items)
{
    if (w == 0 || items == 0)
        return 0;
    if (weight[items - 1] > w)
        return knap_sack(w, weight, value, items - 1);
    else
        return max(value[items - 1] + knap_sack(w - weight[items - 1], weight, value, items - 1),
                   knap_sack(w, weight, value, items - 1));
}

void solve()
{
    int items, w;
    cin >> items >> w;
    int weight[items];
    int value[items];
    for (int i= 0;i < items;i++)
        cin >> weight[i] >> value[i];
    cout << knap_sack(w, weight, value, items);
}
int main()
{
    solve();
    return 0;
}
