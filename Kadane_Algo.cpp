// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     To print the subarray
//     n ( n + 1 )
//     -----------
//          2
//     */
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     /* maximum of subarray sum ---> Brute force approach */
//     int n = 5;
//     int arr[5] = {10, -5, 2, -10, 30};
//     int maxsum = 0;
//     for (int st = 0; st < n; st++)
//     {
//         int sum = 0;
//         for (int end = st; end < n; end++)
//         {
//             sum += arr[end];
//             maxsum = max(sum, maxsum);
//         }
//     }
//     cout << maxsum << endl;
//     return 0;
// }

/* maximum of subarray sum ---> Kadane's Algorithm */
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {10, -5, 2, -10, 30};

    int maxsum = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Kadane's Algorithm
        sum += arr[i];
        maxsum = max(sum, maxsum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxsum << endl;
    return 0;
}