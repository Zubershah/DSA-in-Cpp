// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//     int start = 0;
//     int end = arr.size() - 1;
//     int target = 0;
//     while (start <= end)
//     {
//         /*
//         At worst condition, for example: start and end will be INT_MAX.
//         middle is int data type and will cause overflow. to avoid this small change in formula.
//         int middle = (start + end) / 2;
//         */
//         int middle = start + ((end - start) / 2);

//         if (arr[middle] > target)
//         {
//             end = middle - 1;
//         }
//         else if (arr[middle] < target)
//         {
//             start = middle + 1;
//         }
//         else
//         {
//             cout << middle << endl;
//             return 0;
//         }
//     }
//     cout << "invalid target" << endl;
//     return 0;
// }

/* Binary search with recursion */
#include <iostream>
#include <vector>
using namespace std;
int func(vector<int> arr, int target, int start, int end)
{
    if (start <= end)
    {

        int middle = start + ((end - start) / 2);
        if (arr[middle] > target)
        {
            // end = middle - 1;
            // return func(arr, target, start, end);
            return func(arr, target, start, middle - 1);
        }
        else if (arr[middle] < target)
        {
            // start = middle + 1;
            // return func(arr, target, start, end);
            return func(arr, target, middle + 1, end);
        }
        else
        {
            return middle;
        }
    }
    cout << "invalid target" << endl;
    return -1;
}
int main()
{
    vector<int> arr = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int start = 0;
    int end = arr.size() - 1;
    int target = 0;
    cout << func(arr, target, start, end) << endl;
    return 0;
}