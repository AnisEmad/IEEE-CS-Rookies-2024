#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
int maxi(int *arr,int n){
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}
int mini(int *arr, int n){
    int mn = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}
bool ifprime(int n){
    int num = n-1;
    bool prime = false;
    while(num >= 1){
        prime = true;
        if(n%num == 0 && num != 1){
            prime = false;
            break;
        }
        num--;
    }
    if(prime){
        return true;
    }
    else
        return false;
}
int countprime(int *arr,int n){
    int c = 0;
    for(int i = 0;i<n;i++){
        if(ifprime(arr[i])){
            c++;
        }
    }
    return c++;
}
bool ifplaindrome(int n){
    int temp = n;
    int rev = 0;
    while(temp > 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n){
        return true;
    }else
        return false;
}
int countplaindrome(int *arr,int n){
    int p = 0;
    for(int i = 0;i<n;i++){
        if(ifplaindrome(arr[i])){
            p++;
        }
    }
    return p;
}
int numOfDivisor(int n){
    int c = 0;
    int temp = n;
    while(temp > 0){
        if(n%temp == 0)
            c++;
        temp--;
    }
    return c;
}
int maxDivisor(int *arr,int n){
    int greatD = INT_MIN;
    int greatN = INT_MIN;
    for(int i = 0;i<n;i++){
        int m = numOfDivisor(arr[i]);
        if(m > greatD){
            greatN = arr[i];
            greatD = m;
        }else if(m == greatD){
            greatN = max(greatN, arr[i]);
        }
    }
    return greatN;
}
void print(int *arr,int n){
    cout << "The maximum number : " << maxi(arr,n) << endl;
    cout << "The minimum number : " << mini(arr,n) << endl;
    cout << "The number of prime numbers : " << countprime(arr,n) << endl;
    cout << "The number of palindrome numbers : " << countplaindrome(arr,n) << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisor(arr,n) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    print(arr, n);
    return 0 ;
}