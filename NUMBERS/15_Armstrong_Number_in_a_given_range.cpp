/*
    Find the Armstrong Numbers in a given Interval in C++:

    Example 1:
Input : 100 400
Output :153 370 371
Explanation : 100 and 400 are given 
two integers.(interval)
*/

#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(long long int val){
    long long int n = val,n1 = val, check = 0,d;
    long long int len = 0;
    while(n > 0){
        len++;
        n /= 10;
    }

    while(n1 > 0){
        d = n1 % 10;
        check += pow(d,len);
        n1 /= 10;
    }
    if(check == val){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    long long int low , high;
    cin>>low>>high;
    for(long long int i = low;i<=high;i++){
        if(isArmstrong(i)){
            cout<<i<<",";
        }
    }
}