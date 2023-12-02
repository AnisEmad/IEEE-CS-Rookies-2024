#include <iostream>

using namespace std;

int main()
{
    long long  x,counter;
    string s;
    cin >> x >> s;
    counter = x;
    for (int i = 0; i < x-1; i++)
    {
        if (s[i] == s[i+1])
        {
            counter--;
        }
    }
    cout << counter << endl;
    return 0;
}
