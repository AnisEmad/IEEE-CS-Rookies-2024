#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, hello;
    hello = "hello";
    cin >> s;
    bool isFound = true;
    int j = 0;
    int count = 0;// to determine if the whole word is there or not
    for(int i = 0; i < 5; i++)
    {
        if(!isFound)
            break;
        while(j < s.length())
        {
            if(hello[i] == s[j])
            {
                isFound = true;
                count++;
                j++;
                break;
            }
            else
            {
                isFound = false;
            }
            j++;
        }
    }
    if(isFound && count >= 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
