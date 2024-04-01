// C++ Program to check whether a number is an Automorphic number or not

/*
    An Automorphic number is a special number, whose’s square ends with the same digits as the number itself


    example : Num: 376, Square: 141376 - is Automorphic
*/

#include<bits/stdc++.h>
using namespace std;
bool check(int num){
    int sqr = num * num;
    while(num > 0){

        if(num % 10 != sqr % 10){
            return false;
        }
        num /= 10;
        sqr /= 10;
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    if(check(num))cout<<"Automorphic number"<<endl;
    else cout<<"Not an Automorphic number"<<endl;
}

