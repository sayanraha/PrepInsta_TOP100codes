// Perfect Number Program in C++

/*
    A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

For Example: 28
Divisors : 1 + 2 + 4 + 7 + 14 = 28
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n = num;
    int sum = 0;
    for(int i = 1;i <= num /2 ;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout<<"Perfect Number"<<endl;
    }
    else{
        cout<<"Not a Perfect Number"<<endl;
    }
}