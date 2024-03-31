// Check Whether a Number is Even or Odd

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>> num;
    string res = num %2 == 0 ? "Even" : "Odd";
    cout<<res<<endl;
    return 0; 
}