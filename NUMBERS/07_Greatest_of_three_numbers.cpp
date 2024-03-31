/*
    Program to find the Greatest of three numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;

    cin>> num1>>num2>>num3;

    int res = max(max(num1,num2),num3);
    cout<<res;
    return 0;
}