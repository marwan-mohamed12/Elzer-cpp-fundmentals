#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of the kilobytes: \n";
    int num_kilobyte;
    cin >> num_kilobyte;
    cout << "The number of kilobytes is = " << num_kilobyte << "\n";
    int num_bytes = num_kilobyte * 1024;
    cout << num_kilobyte << " is equle to " << num_bytes << " bytes\n";
    cout << num_kilobyte << " is equle to " << num_bytes * 8 << " bytes\n";
    return 0;
}