#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            int max_num=a[i];
            for(int j = i; j < n; j++)
            {
                if(max_num < a[j])
                {
                    max_num = a[j];
                }
                cout << max_num << " ";
            }
        }
        cout<<endl;
    }
}

int main()
{

    //try_code();
    solve();
    return 0;
}
