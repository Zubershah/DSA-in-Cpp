// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//     Basics of subarray
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
//     int n = 3;
//     int arr[3] = {10, -5, 2};
//     int maxsum = INT_MIN;
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
    int n = 3;
    int arr[3] = {10, -5, 2};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        // Kadane's Algorithm
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}