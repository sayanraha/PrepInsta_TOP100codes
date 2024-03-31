/*
    Find the Greatest of the Two Numbers in C++
Given two integers as input, the objective is to check both numbers for the greatest and write a code to find the greatest of the two numbers in C++.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1 , num2;
    cin>>num1>>num2;

    int result = max(num1,num2);
    cout<<result;
    return 0;
}