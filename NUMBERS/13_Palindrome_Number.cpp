/*
    Palindrome Program in C++

    Example :
    Number : 12321
    Reverse : 12321

    Both number & reverse are equal so palindrome number.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int new_num = 0,d, n = num;
    while(n > 0){
        d = n % 10;
        new_num = new_num * 10 + d;
        n /= 10;
    }
    if(num == new_num){
        cout<<"Both number & reverse are equal so palindrome number."<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
}