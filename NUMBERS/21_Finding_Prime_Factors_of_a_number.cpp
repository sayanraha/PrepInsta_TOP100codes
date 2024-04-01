/*
    Given a number n, write an efficient function to print all prime factors of n. For example, if the input number is 12, then the output should be “2 2 3”. And if the input number is 315, then the output should be “3 3 5 7”.
*/

#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n){
    // if n is even
    while(n % 2==0){
        cout<<2<<", ";
        n/=2;
    }

    // if n is odd at certain time

    for(int i=3;i<sqrt(n);i+=2){
        while(n%i == 0){
            cout<<i<<", ";
            n /= i;
        }
    }

    // This condition is to handle the case when n 
    // is a prime number greater than 2 
    if (n > 2) 
        cout << n << " ";  


}
int main(){

    int n;
    cin>>n;
    primeFactors(n);
    return 0;

}