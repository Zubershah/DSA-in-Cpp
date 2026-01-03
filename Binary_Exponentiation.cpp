#include <iostream>
using namespace std;
double power(double a, int n)
{
    double ans = 1;        // Used because negative powers create fractions (e.g. 0.25), and int can't store fractions.
    long long int exp = n; // Used to safely convert the smallest possible negative integer to positive without overflowing.
    if (exp < 0)
    {
        /*
        The general formula for negative exponents
                 1
        a^-n = -----
                a^n
        */
        a = 1 / a;
        exp = -exp; // -2 ---> 2
    }

    /*
    The loop breaks the exponent down into its binary bits.
    If we calculate 3^5, the exponent 5 in binary is 101.
    This means 5 = 4 + 1. So we need to calculate: 3^4 * 3^1.
    */
    while (exp > 0)
    {
        /*
        Checks if the current last bit of exp is 1 (Odd).
        If the bit is 1, it means "Yes, we need this power."
        We multiply the current ans by the current base a
        */
        if (exp & 1)
        {
            ans *= a;
        }
        a *= a;   
        exp >>= 1; // Deletes the last bit of the exponent and updates
    }
    return ans;
}
int main()
{
    cout << power(2, 2);
    return 0;
}