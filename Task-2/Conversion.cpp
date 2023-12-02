#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==',')str[i]=' ';
        else if(int(str[i])>64&&int(str[i])<91)str[i]+=32;
        else if(int(str[i])>96&&int(str[i])<123)str[i]-=32;
    }
    cout<<str<<endl;

    return 0;
}
