/*
Author CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1

Takes a year and determines if it is a leap year or a common year
*/
#include<iostream>

using namespace std;
int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if(year % 4 != 0){
        cout << "It is a common year\n";
    } else if(year % 100 != 0){
        cout << "It is a leap year\n";
    } else if(year % 400 !=0){
        cout << "It is a common year\n";
    } else {
        cout << "It is a leap year\n";
    }
}
