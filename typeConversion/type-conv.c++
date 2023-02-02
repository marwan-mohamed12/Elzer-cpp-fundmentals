#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    double b = 20.5;
    cout << a + b << "\n"; // outPut 30.5 the compiler did an implicit conversion to a and make it double
    cout << "##########################\n";
    int c = 3;
    double d = 1.3;
    cout << c + (int)d << "\n"; // (int) ore int(d) this is explicit conversion
    return 0;
}