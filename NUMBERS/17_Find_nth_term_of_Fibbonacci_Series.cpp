/*
    Finding the Nth Term of the Fibonacci Series in C++ :
*/

#include <bits/stdc++.h>
using namespace std;
int nthFibbonacci(int n){
    if(n== 0 or n== 1)return n;
    int dp[n+1];
    dp[0]= 0;
    dp[1] = 1;
    for(int i = 2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n-1];
}
int main()
{
    int n;
    cin >> n;
    cout << nthFibbonacci(n);
    return 0;
}