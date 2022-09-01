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
    bool leapYear;
    int year;
    int month;
    int days;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if(year % 4 != 0){
        leapYear = false;
    } else if(year % 100 != 0){
        leapYear = true;
    } else if(year % 400 !=0){
        leapYear = false;
    } else {
        leapYear = true;
    }

    if(month==1){
        days=31;
    }else if(month==2 && leapYear){
        days=29;
    }else if(month==2 && !leapYear){
        days=28;
    }else if(month==3){
        days=31;
    }else if(month==4){
        days=30;
    }else if(month==5){
        days=31;
    }else if(month==6){
        days=30;
    }else if(month==7){
        days=31;
    }else if(month==8){
        days=31;
    }else if(month==9){
        days=30;
    }else if(month==10){
        days=31;
    }else if(month==11){
        days=30;
    }else if(month==12){
        days=31;
    }
    cout << days << " days";
}