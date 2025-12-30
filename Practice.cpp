/* Problems */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*sum of all numbers from 1 to n which are divisible by 3*/
//     int n, sum = 0;
//     cout << "enter the number\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "the sum value is " << sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*print factorial of a number n*/
//     int n, factorial = 1;
//     cout << "enter the number\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     cout << "the factorial value is " << factorial;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int nCr(int n, int r)
// {
//     /*
//     nCr = n! / r! * ( n - r ) !
//     */
//     int nfactorial = 1, rfactorial = 1, nrfactorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         nfactorial *= i;
//     }

//     for (int j = 1; j <= r; j++)
//     {
//         rfactorial *= j;
//     }

//     for (int i = 1; i <= n - r; i++)
//     {
//         nrfactorial *= i;
//     }

//     return (nfactorial / (rfactorial * nrfactorial));
// }
// int main()
// {
//     /* calculate nCr binomial co-efficient for n & r */
//     int n = 9, r = 1;
//     cout << nCr(n, r);
// }

// #include <iostream>
// using namespace std;
// int isprime(int i)
// {
//     /* Print all Prime numbers until N */
//     if (i == 1)
//     {
//         return 0;
//     }
//     for (int j = 2; j < i; j++)
//     {
//         if (i % j == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// void check(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (isprime(i))
//         {
//             cout << i << endl;
//         }
//     }
// }
// int main()
// {
//     int n = 26;
//     check(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /* Decimal ---> Binary */
//     int Deci = 50;
//     int Bin = 0;
//     int Power = 1;
//     while (Deci > 0)
//     {
//         int Rem = Deci % 2;
//         Deci /= 2;
//         Bin += (Rem * Power);
//         Power *= 10;
//     }
//     cout << Bin;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /* Binary ---> Decimal */
//     int Bin = 1110;
//     int Deci = 0;
//     int power = 1;
//     while (Bin > 0)
//     {
//         int rem = Bin % 10;
//         Bin /= 10;
//         Deci += (rem * power);
//         power *= 2;
//     }
//     cout << Deci;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     /* Check n is power of 2 */
//     int n = 64;
//     /* Logic:
//        Powers of 2 in binary always have exactly one '1' bit (e.g., 4 is 100, 8 is 1000).
//        The expression (n & (n - 1)) removes that single '1'.
//        If the result is 0, it means n was a power of 2.
//     */

//     if (n > 0 && (n & (n - 1)) == 0)
//     {
//         cout << n << " is the power of 2" << endl;
//     }
//     else
//     {
//         cout << n << " is not the power of 2" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int function(int num)
// {
//     int reversevalue = 0;
//     while (num > 0)
//     {
//         int remainder = num % 10;
//         num /= 10;
//         reversevalue = (reversevalue * 10) + remainder;
//     }
//     return reversevalue;
// }
// int main()
// {
//     int n = 34889;
//     int reverse = function(n);
//     cout << reverse;
//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     int marks[] = {61, 343, 1, -3, 12};
//     int smallest = INT_MAX;
//     int smallindex;
//     int largeindex;
//     int largest = INT_MIN;
//     for (int i = 0; i < 5; i++)
//     {
//         if (marks[i] < smallest)
//         {
//             smallest = marks[i];
//             smallindex = i;
//         }
//         // smallest = min(marks[i], smallest);
//         if (marks[i] > largest)
//         {
//             largest = marks[i];
//             largeindex = i;
//         }
//         // largest = max(marks[i], largest);
//     }
//     cout << smallest << endl;
//     cout << smallindex << endl;
//     cout << largest << endl;
//     cout << largeindex << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int function(int arr[], int target)
// {
//     for (int i = 0; i < 6; i++)
//     {
//         if (target == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {4, 32, 2, 8, 145, 43};
//     int target = 4;
//     int value = function(arr, target);
//     cout << value;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void func(int arr[])
// {
//     int sum = 0, product = 1;
//     for (int i = 0; i < 7; i++)
//     {
//         sum += arr[i];
//         product *= arr[i];
//     }
//     cout << sum << endl;
//     cout << product << endl;
// }
// int main()
// {
//     int arr[] = {32, 20, 23, 3, 4, 1, 6};
//     func(arr);
//     return 0;
// }

// /* Write a function to print intersection of 2 array*/
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void func(int arr[], int arr1[])
// {
//     for (int i = 0; i < 6; i++)
//     {
//         for (int k = 0; k < 5; k++)
//         {
//             if (arr[i] == arr1[k])
//             {
//                 cout << arr[i] << endl;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {21, -2, 321, 1, -23, 17};
//     int arr1[] = {1, 32, 76, 8, 17};
//     func(arr, arr1);
//     return 0;
// }

/* write a function to print unique value of an array */
#include <iostream>
using namespace std;
void func(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        int count = 0;
        for (int k = 0; k < 9; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "Unique value: " << arr[i] << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 5, 4};
    func(arr);
    return 0;
}