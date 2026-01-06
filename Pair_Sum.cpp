// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> func(vector<int> vec, int target)
// {
//     vector<int> Ans;
//     // Brute Force approach
//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = i + 1; j < vec.size(); j++)
//         {
//             if (target == vec.at(i) + vec.at(j))
//             {
//                 Ans.push_back(i);
//                 Ans.push_back(j);
//                 return Ans;
//             }
//         }
//     }
//     return Ans;
// }
// int main()
// {
//     vector<int> vec = {2, 7, 15, 20};
//     int target = 35;
//     vector<int> Ans = func(vec, target);
//     cout << "size of an vector array is " << Ans.size() << endl;
//     if (Ans.size() != 0)
//     {
//         for (int i : Ans)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

/* Optimal 2 point approach */
#include <iostream>
#include <vector>
using namespace std;
vector<int> func(vector<int> vec, int target)
{
    vector<int> Ans;
    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        int check = vec.at(i) + vec.at(j);
        if (check > target)
        {
            j--;
        }
        else if (check < target)
        {
            i++;
        }
        else
        {
            Ans.push_back(i);
            Ans.push_back(j);
            return Ans;
        }
    }
    return Ans;
}
int main()
{
    vector<int> vec = {2, 7, 15, 20};
    int target = 35;
    vector<int> Ans = func(vec, target);
    cout << "size of an vector array is " << Ans.size() << endl;
    if (Ans.size() != 0)
    {
        for (int i : Ans)
        {
            cout << i << " ";
        }
    }
    return 0;
}