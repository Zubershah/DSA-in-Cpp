// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> func(vector<int> arr)
// {
//     vector<int> Ans(arr.size());
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int product = 1;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (i != j)
//             {
//                 product *= arr[j];
//                 Ans[i] = product;
//             }
//         }
//     }
//     return Ans;
// }
// int main()
// {
//     vector<int> arr = {2, 4, 6, 9, 8};
//     vector<int> Ans = func(arr);
//     for (int i : Ans)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

/* Optimal Approach */
#include <iostream>
#include <vector>
using namespace std;
vector<int> func(vector<int> arr)
{
    vector<int> Ans(arr.size());
    int prefix = 1, suffix = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        Ans[i] = prefix;
        prefix *= arr[i];
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        Ans[i] *= suffix;
        suffix *= arr[i];
    }
    return Ans;
}
int main()
{
    vector<int> arr = {2, 4, 6, 9, 8};
    vector<int> Ans = func(arr);
    for (int i : Ans)
    {
        cout << i << endl;
    }
    return 0;
}