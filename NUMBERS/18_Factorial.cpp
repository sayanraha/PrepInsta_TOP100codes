// C++ Program to find the Factorial of a Number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int fact = 1;
    for(int i = 1;i<=num;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<num <<" is = "<<fact;
    return 0;
}