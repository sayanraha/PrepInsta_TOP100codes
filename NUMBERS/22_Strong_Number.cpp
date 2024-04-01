/*
    C++ Program to check whether a number is a Strong Number or not
Strong Number in C++


Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.

For Example: 145 
145 = 1! + 4! + 5! =  145
*/


#include<bits/stdc++.h>
using namespace std;
int fact(int val){
    int f = 1;
    for(int i = 1;i<=val;i++){
        f = f * i;
    }
    return f;
}
void Strong(int num){
    int sum = 0,d,n = num;
    while(n > 0){
        d = n % 10;
        sum += fact(d);
        n /= 10;
    }
    if(sum == num){
        cout<<"Strong Number"<<endl;
    }
    else{
        cout<<"Not a Strong Number"<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    Strong(num);
}