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