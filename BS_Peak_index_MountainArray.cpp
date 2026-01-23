// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     /* Linear search approach */
//     vector<int> arr = {0, 3, 8, 9, 5, 2};
//     for (int i = 1; i < arr.size() - 1; i++)
//     {
//         if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
//         {
//             cout << arr[i] << endl;
//             return 0;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /* Binary search approach */
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int start = 1, end = arr.size() - 2;
    while (start <= end)
    {
        int middle = start + ((end - start) / 2);
        if (arr[middle] > arr[middle - 1] && arr[middle] > arr[middle + 1])
        {
            cout << arr[middle] << endl;
            return 0;
        }
        if (arr[middle] < arr[middle + 1])
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return 0;
}