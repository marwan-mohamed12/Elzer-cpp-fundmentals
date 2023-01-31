#include <iostream>
using namespace std;

int main()
{
    using bignum = long long;
    cout << sizeof(bignum) << endl;
    typedef short unsigned smallnum;
    cout << sizeof(smallnum);
    return 0;
}