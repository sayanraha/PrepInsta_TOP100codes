/*
    Fibonacci Series in C++

    Following is Fibonacci Series -
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    cout<<dp[0]<<", "<<dp[1]<<", ";
    for(int i = 2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
         cout<<dp[i]<<", ";
    }
    return 0;
}