/*
    C++ Program to find the Reverse of a Number

    Example:
    Number: 5678
    Reverse: 8765
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int rev = 0,d;

    while(num > 0){
        d = num % 10;
        rev = rev * 10 + d;
        num /= 10;
    }
    cout<<rev<<endl;
    return 0;
}