/*
    C++ Program to Check Whether the Number is Prime or Not
A prime number is a number that can be divided by 1 and itself i.e. a number that can not be divided by any other number other than 1 or itself is a prime number.
 
Example 
Input : 5
Output : 5 is a Prime
*/
#include<bits/stdc++.h>
using namespace std;


bool isPrime(int num){
    if(num <= 1) return false;
    else if(num == 2) return true;
    else if(num % 2== 0)return false;
    else{
        for(int i = 3;i<= sqrt(num);i+=2){
            if(num % i == 0)return false;
        }
        return true;
    }
}

int main(){
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is a Prime";
    }
    else{
        cout<<num<<" is not a Prime";
    }
    return 0;
}