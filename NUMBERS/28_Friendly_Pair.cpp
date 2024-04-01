// Friendly Pair in C++

// Two numbers num1 & num2 are friendly pairs if the following holds true -

// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

#include<bits/stdc++.h>
using namespace std;
int getSumDivisior(int num){
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int num1 , num2;
    cin>>num1>>num2;
    int sum1 = getSumDivisior(num1);
    int sum2 = getSumDivisior(num2);

    if(sum1/num1 == sum2/num2)cout<<num1<<" and "<<num2<<" are friendly pairs"<<endl;
    else{
        cout<<num1<<" and "<<num2<<" are not friendly pairs"<<endl;
    }
}