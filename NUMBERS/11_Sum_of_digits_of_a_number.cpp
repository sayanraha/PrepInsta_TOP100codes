/*
    Eg: number = 12345
    Sum of digit of number = 1 + 2 + 3 + 4 + 5
    Sum = 15

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum = 0,d;
    while(num > 0){
        d = num % 10;
        sum += d;
        num /= 10;
    }
    cout<<sum<<endl;
}