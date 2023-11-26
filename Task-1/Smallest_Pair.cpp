#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,sum=0,flag=1,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        mn = arr[0] + arr[1] + 2 - 1;
        for(int z=1; z<n; z++)
        {
            for(int x=z+1; x<=n; x++)
            {
                sum=(arr[z-1]+arr[x-1])+x-z;
                mn = min(mn, sum);

            }
        }
        cout<<mn<<endl;
    }
}

int main()
{

    //try_code();
    solve();
    return 0;
}
