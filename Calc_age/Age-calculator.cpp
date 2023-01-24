#include <iostream>
using namespace std;

int main()
{

    cout << "=============================\n";
    cout << "======Calculate Your Age=====\n";
    cout << "=============================\n";
    cout << "Enter Your Age\n";
    int age;
    cin >> age;
    int age_in_days = age * 365,
        age_in_hours = age_in_days * 24,
        age_in_minutes = age_in_hours * 60,
        age_in_seconds = age_in_minutes * 60;
    cout << "Your Age in Days   : " << age_in_days << " day\n";
    cout << "Your Age in Hours  : " << age_in_hours << " hour\n";
    cout << "Your Age in Minutes: " << age_in_minutes << " minute\n";
    cout << "Your Age in Seconds: " << age_in_seconds << " second\n";
    return 0;
}