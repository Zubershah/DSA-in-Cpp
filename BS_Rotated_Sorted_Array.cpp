#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*
    0 1 2 3 4 5 6 7 ---> sorted array
    3 4 5 6 7 0 1 2 ---> Rotated sorted array
    */
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 7;
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int middle = start + ((end - start) / 2);
        if (arr[middle] == target)
        {
            cout << middle << endl;
            return 0;
        }

        if (arr[start] < arr[middle]) // to check whether the array is sorted on left side of the middle
        {
            if (arr[start] <= target && target <= arr[middle]) // Check if target is inside this sorted half
            {
                end = middle - 1;
            }
            else // if not in sorted half then must be in right side
            {
                start = middle + 1;
            }
        }
        else // then array is sorted on right side of the middle
        {
            if (arr[middle] <= target && target <= arr[end]) // Check if target is inside this sorted half
            {
                start = middle + 1;
            }
            else // if not in sorted half then must be in left side
            {
                end = middle - 1;
            }
        }
    }
    cout << "invalid target" << endl;
    return 0;
}