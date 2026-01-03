// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     /*
//      8.     |                   |
//      7.     |                   |       |
//      6.     |   |               |       |
//      5.     |   |       |       |       |
//      4.     |   |       |   |   |       |
//      3.     |   |       |   |   |   |   |
//      2.     |   |   |   |   |   |   |   |
//      1. |   |   |   |   |   |   |   |   |
//      -----------------------------------------
//     */
//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int maxwater = 0;
//     for (int i = 0; i < height.size(); i++)
//     {
//         for (int j = i + 1; j < height.size(); j++)
//         {
//             int width = j - i;
//             int length = min(height[i], height[j]);
//             int area = width * length;
//             maxwater = max(maxwater, area);
//         }
//     }
//     cout << "maximum water is " << maxwater << endl;
//     return 0;
// }

// Optimal method --> 2 point approach
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*
    8.     |                   |
    7.     |                   |       |
    6.     |   |               |       |
    5.     |   |       |       |       |
    4.     |   |       |   |   |       |
    3.     |   |       |   |   |   |   |
    2.     |   |   |   |   |   |   |   |
    1. |   |   |   |   |   |   |   |   |
    -----------------------------------------
   */
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int first = 0;
    int last = height.size() - 1;
    int maxwater = 0;
    while (first < last)
    {
        int width = last - first;
        int length = min(height[last], height[first]);
        int area = length * width;
        maxwater = max(maxwater, area);
        height[first] < height[last] ? first++ : last--;
    }
    cout << "maximum water is " << maxwater << endl;
    return 0;
}