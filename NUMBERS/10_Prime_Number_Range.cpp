/*

Program to find Prime Numbers in a given range in C++
Here we will discuss how to find prime numbers in the range specified by the user using C++ programming language.

Prime numbers are the numbers which have 2 divisors only 
i.e. can be divided by 1 & itself

Example: 2, 3, 5, 7, 11, 13 .... etc

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
    
    int l , u;
    cin >> l >> u;

    for(int i = l;i <=u;i++){
        if(isPrime(i)){
            cout<<i<<", ";
        }
    }
    return 0;
}