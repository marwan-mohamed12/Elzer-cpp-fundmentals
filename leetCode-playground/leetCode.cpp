#include <iostream>
using namespace std;

int divide(int dividend, int divisor)
{
    if (dividend == 0)
    {
        return 0;
    }
    if (divisor == 0)
    {
        return INT_MAX;
    }

    bool negResult = false;
    if (dividend < 0)
    {
        dividend = -dividend;
        if (divisor < 0)
        {
            divisor = -divisor;
        }
        else
        {
            negResult = true;
        }
    }
    else if (divisor < 0)
    {
        negResult = true;
    }
    int divideResult = 0;

    while (dividend >= divisor)
    {
        dividend -= divisor;
        divideResult++;
    }
    return negResult == true ? divideResult * -1 : divideResult;
}

int main()
{
    cout << divide(7, -3);
    return 0;
}