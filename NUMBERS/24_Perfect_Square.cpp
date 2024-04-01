// Program to Check for Perfect Square in C++

/*
    A perfect square is a number that can be expressed as the product of an integer by itself or as the second exponent of an integer.

*/

#include<bits/stdc++.h>
using namespace std;
void checkPerfectSquare(int n){
    if(ceil((double)sqrt(n))==floor((double)sqrt(n))){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return;
}
int main(){
    int n;
    cin>>n;
    checkPerfectSquare(n);
    return 0;
}