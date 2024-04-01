/*
    Armstrong Number in C++:
    What is an Armstrong Number
Any number that satisfies the following format –

abcd… = a^n + b^n + c^n + d^n + …
Where n is the order(length/digits in number)
That is for any number num if the sum of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.

Example = 407 (order/length = 3)
407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int number;
    cin>> number;
   long long int n = number,n1 = number, check = 0,d;
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
    if(check == number){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}