/* square Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     1234
//     1234
//     1234
//     1234
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ****
//     ****
//     ****
//     ****
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ABCD
//     ABCD
//     ABCD
//     ABCD
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     123
//     456
//     789
//     */
//     int n = 3;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ABC
//     DEF
//     GHI
//     */
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Triangle Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*

//      *
//      **
//      ***
//      ****

//      */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      1
//      22
//      333
//      4444
//     */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      A
//      BB
//      CCC
//      DDDD
//     */
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      1
//      12
//      123
//      1234
//     */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Reverse Triangle Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      1
//      21
//      321
//      4321
//     */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         int num = i;
//         for (int j = 0; j < i; j++)
//         {
//             cout << num << " ";
//             num--;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      A
//      BA
//      CBA
//      DCBA
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch--;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Floyd's Triangle Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      1
//      23
//      456
//      78910
//     */
//     int n = 4;
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//      A
//      BC
//      DEF
//      GHIJ
//     */
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Inverted Triangle Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     1111
//     _222
//     __33
//     ___4

//     _ ---> spaces
//     */
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i; j++) // spaces
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << i + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     AAAA
//     _BBB
//     __CC
//     ___D

//     _ ---> spaces
//     */
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i; j++) // spaces
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }

/* Pyramid Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     ___1
//     __121
//     _12321
//     1234321

//     _ ---> spaces
//     */
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++) // spaces
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << k;
//         }
//         for (int l = i - 1; l > 0; l--)
//         {
//             cout << l;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* Hollow Diamond Pattern */

// #include <iostream>
// using namespace std;
// int main()
// {

//     //     *        3 Outer space
//     //    * *       2 Outer space, 1 inner space
//     //   *   *      1 Outer space, 3 Inner space
//     //  *     *     5 Inner space
//     //   *   *      1 Outer space, 3 Inner space
//     //    * *       2 Outer space, 1 inner space
//     //     *        3 Outer space

//     // To solve above pattern divide the pattern into 2.
//     // Top
//     //     *        3 Outer space
//     //    * *       2 Outer space, 1 inner space
//     //   *   *      1 Outer space, 3 Inner space
//     //  *     *     5 Inner space
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++) // outer spaces
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != 1) // inner spaces
//         {
//             for (int k = 0; k < 2 * i - 3; k++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     // Bottom
//     //   *   *      1 Outer space, 3 Inner space
//     //    * *       2 Outer space, 1 inner space
//     //     *        3 Outer space
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = 1; j < i + 1; j++) // outer spaces
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != n - 1) // inner spaces
//         {
//             for (int k = 1; k <= 2 * (n - i) - 3; k++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    // *      *     6 space between stars
    // **    **     4 space between stars
    // ***  ***     2 space between stars
    // ********
    // ***  ***     2 space between stars
    // **    **     4 space between stars
    // *      *     6 space between stars

    // To solve above pattern divide the pattern into 2.
    // Top
    // *      *     6 space between stars
    // **    **     4 space between stars
    // ***  ***     2 space between stars
    // ********
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Bottom
    // ***  ***     2 space between stars
    // **    **     4 space between stars
    // *      *     6 space between stars
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}