// Check if a Number is Positive or Negative

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>> num;
    string res = num >= 0 ? "Positive" : "Negative";
    cout<<res<<endl;
    return 0; 
}