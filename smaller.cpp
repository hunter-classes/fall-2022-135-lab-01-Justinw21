/*
Author CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1

Takes two numbers and prints the smaller of the two
*/
#include<iostream>

using namespace std;
int main()
{
    int firstNum;
    int secondNum;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    if(firstNum < secondNum){
        cout << "The smaller of the two is " << firstNum << "\n";
    } else {
        cout << "The smaller of the two is " << secondNum << "\n";
    }
}