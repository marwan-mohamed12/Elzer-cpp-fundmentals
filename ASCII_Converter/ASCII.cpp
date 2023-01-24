#include <iostream>
using namespace std;

int main()
{
    cout << "Enter ASCII: \n";
    int char_from_ascii;
    cin >> char_from_ascii;
    cout << "The Character is : " << char(char_from_ascii) << "\n";
    cout << "======================\n";
    cout << "Enter Character: \n";
    char ascii_from_char;
    cin >> ascii_from_char;
    cout << "The ASCII is : " << int(ascii_from_char) << "\n";
    return 0;
}