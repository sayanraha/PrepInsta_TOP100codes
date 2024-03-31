/*
    Program to Check Whether a Year is a Leap Year or Not in C++
Given an integer input for a year, the objective is to write a Program to Check Whether a Year is a Leap Year or Not in C++ Language.

Example
Input : 2020
Output : 2020 is a Leap Year

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;

    string res = (year % 4 == 0 and year % 100 !=0) or ( year % 400 == 0 ) ? "Leap Year" : "Not a Leap Year";

    cout<<res;
}