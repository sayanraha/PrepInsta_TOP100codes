// C++ program to the Power of a number

/*
    We need the following to calculate power of number -
    Base : 5
    Exponent : 3
    Power = 5^3 = 125 
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int base,expo;

    cin>>base>>expo;

    cout<<pow(base,expo);
    return 0;
}