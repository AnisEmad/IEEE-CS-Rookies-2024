#include <iostream>

using namespace std;
int printToN(int maxNum)
{
    for(int i = 1; i <= maxNum; i++)
    {
        if(i == maxNum)cout<<i<<endl;
        else
            cout<<i<<" ";
    }
}

int main()
{
    int x;
    cin>>x;
    printToN(x);
    return 0;
}