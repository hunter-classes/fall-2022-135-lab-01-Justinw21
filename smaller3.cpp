/*
Author CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1

Takes three numbers and prints the smaller of the three
*/
#include<iostream>

using namespace std;
int main()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    cout << "Enter the third number : ";
    cin >> thirdNum;
    if(firstNum < secondNum && firstNum < thirdNum){
        cout << "\nThe smaller of the three is " << firstNum << "\n";
    } else if(secondNum < firstNum && secondNum < thirdNum) {
        cout << "\nThe smaller of the three is " << secondNum << "\n";
    } else {
        cout << "\nThe smaller of the three is " << thirdNum << "\n";
    }
}