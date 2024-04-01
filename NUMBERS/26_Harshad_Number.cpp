// C++ program to check whether a number is a Harshad Number or not

// A harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called Niven Number.

#include<bits/stdc++.h>
using namespace std;
void Harshad(int num){
    int sum = 0,n = num,d;
    while(num > 0){
        d = num % 10;
        sum += d;
        num /= 10;
    }
    if(n % sum == 0){
        cout<<"Harshad Number";
    }
    else{
        cout<<"Not a Harshad Number";
    }
    return;
}
int main(){
    int num;
    cin>>num;
    Harshad(num);
}