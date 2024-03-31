/*
    Find the Sum of Numbers in a given range in C++
Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range in C. To do so we’ll keep iterating and adding the numbers from num1 until num2 to the Sum variable.

Example
Input : 2 5
Output : 2 + 3 + 4 + 5 + 6 = 20
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    cin>> x >> y;
    int sum = y *  (y + 1) / 2 - x * (x+1)/2 + x;
    cout<<sum;
    return 0;
}
