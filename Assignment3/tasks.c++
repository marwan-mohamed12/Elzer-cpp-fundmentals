#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // Task 2
    double salary = 5000.98;
    // 8 Bytes
    // 64 Bits
    cout << sizeof(salary) << " Bytes" << endl;
    cout << sizeof(salary) * 8 << " Bits" << endl;

    // Task 3
    cout << "Maximum Integer Number Is => " << INT_MAX << "\n";
    cout << "Minimum Integer Number Is => " << INT_MIN << "\n";
    cout << "Maximum Short Integer Number Is => " << SHRT_MAX << "\n";
    cout << "Minimum Short Integer Number Is => " << SHRT_MIN << "\n";

    // Task 4
    cout << sizeof(float(10.5 + 5 + 20.5 + 10)) << "\n"; // 4

    // Task 5
    // char a = '~';
    // char b = '&';
    // char c = '%';
    // char d = 'A';
    // cout << "ASCII Value of ~ Is " << int(a) << "\n";
    // cout << "ASCII Value of & Is " << int(b) << "\n";
    // cout << "ASCII Value of % Is " << int(c) << "\n";
    // cout << "ASCII Value of A Is " << int(d) << "\n";

    // Task 6
    // int a = 69;
    // int b = 108;
    // int c = 122;
    // int d = 101;
    // int e = 114;
    // int f = 111;
    // cout << "Character Of This ASCII Value 69 Is  " << char(a) << "\n";
    // cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    // cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    // cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    // cout << "Character Of This ASCII Value 104 Is " << char(e) << "\n";
    // cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    // Task 7
    // int a = 1;
    // int b = 13;
    // int c = 17;
    // int d = 70;
    // cout << char(d - a) << char(c + d) << char(b + d) << "\n";

    // Task 8
    // short a = 100;
    // double b = 15001500;
    // long double c = 100.54565746;

    // // Do Not Edit
    // cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    // cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    // cout << sizeof(c) << " Bytes\n"; // 16 Bytes

    // Task 9
    // unsigned int a = 100;
    // signed int b = -100;
    // short c = 100;
    // float d = 500.55;

    // // Do Not Edit
    // cout << a << "\n"; // 100
    // cout << b << "\n"; // -100
    // cout << c << "\n"; // 100
    // cout << d << "\n"; // 500.55

    // Task 10
    // Add Type Alias Here
    // using lli = long long;
    // typedef long long lli;
    // using lli = long long;
    // // Do Not Edit
    // lli num = 150050005; // This Is Long Long Int
    // cout << num << "\n"; // 150050005

    // Task 11
    // Do Not Edit Here
    // short int a = 100;
    // float b = 98.5f;
    // double c = 1.7;

    // // Edit This Line And Use Type Casting To Get The Output
    // cout << (int)(a + b + c) << "\n"; // 200

    // Task 12
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << sizeof(c) - sizeof(b) << "\n";                // 12
    cout << sizeof(c) + sizeof(b) << "\n";                // 20
    cout << sizeof(c) * sizeof(a) << "\n";                // 32
    cout << int(c) * a << "\n";                           // 5000
    cout << char(sizeof(c) * (sizeof(b) + true)) << "\n"; // P
    cout << char(sizeof(c) * int(c)) << endl;
    return 0;
}