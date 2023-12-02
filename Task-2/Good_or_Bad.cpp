#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        string str;
        cin>>str;
        if(str.find("101")!= string::npos||str.find("010")!=string::npos)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}
