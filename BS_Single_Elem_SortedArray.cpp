// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6};

//     /* Base case for first element */
//     if (arr[0] != arr[1])
//     {
//         cout << arr[0] << endl;
//         return 0;
//     }

//     /* Base case for last element */
//     if (arr[arr.size() - 1] != arr[arr.size() - 2])
//     {
//         cout << arr[arr.size() - 1] << endl;
//         return 0;
//     }

//     for (int i = 1; i < arr.size() - 1; i++)
//     {
//         if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
//         {
//             cout << arr[i] << endl;
//             return 0;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6};
//     int ans = 0;
//     for (int x : arr)
//     {
//         ans ^= x;
//     }
//     cout << ans;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6};
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int middle = start + ((end - start) / 2);

        /* Base case for first element */
        if (middle == 0 && arr[0] != arr[1])
        {
            cout << arr[0] << endl;
            return 0;
        }

        /* Base case for last element */
        if (middle == arr.size() - 1 && arr[middle] != arr[arr.size() - 2])
        {
            cout << arr[middle] << endl;
            return 0;
        }

        if (arr[middle] != arr[middle - 1] && arr[middle] != arr[middle + 1])
        {
            cout << arr[middle] << endl;
            return 0;
        }

        if (middle % 2 == 0)
        {
            if (arr[middle - 1] == arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                start = middle + 1;
            }
        }
        else
        {
            if (arr[middle - 1] == arr[middle])
            {
                start = middle + 1;
            }
            else
            {
                end = middle - 1;
            }
        }
    }
    return 0;
}