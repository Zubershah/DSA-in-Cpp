/* Brute force approach */
// #include <iostream>
// #include <vector>
// using namespace std;
// void func(vector<int> vec)
// {
//     for (int i = 0; i < vec.size(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < vec.size(); j++)
//         {
//             if (vec.at(i) == vec.at(j))
//             {
//                 count++;
//             }
//         }
//         if (count > (vec.size() / 2))
//         {
//             cout << vec.at(i);
//             return;
//         }
//     }
//     cout << "no majority found";
//     return;
// }
// int main()
// {
//     vector<int> vec = {1, 1, 3, 3, 3, 1, 3};
//     func(vec);
//     return 0;
// }

/* optimize approach */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 3, 5, 4, 4, 4, 5, 5, 5, 5, 2, 5, 3, 5, 5};
//     sort(vec.begin(), vec.end()); //Output: 1 2 2 3 3 4 4 5 5 5 5 5 5 5 5
/*
1 2 2 3 3 4 4 5 5 5 5 5 5 5 5
                            ^
                            |
                            |
*/
//     int count = 1;
//     int Ans=0;
//     for (int i = 1; i < vec.size(); i++)
//     {
//         if (vec.at(i - 1) == vec.at(i))
//         {
//             count++;
//             Ans = vec.at(i);
//         }
//         else
//         {
//             count = 1;
//             Ans = 0;
//         }
//     }
//     if (count > (vec.size() / 2))
//     {
//         cout << Ans << endl;
//     }
//     else
//     {
//         cout << "no majority found" << endl;
//     }
//     return 0;

/* moore's voting algorithm */
// #include <iostream>
// #include <vector>
// using namespace std;
// int func(vector<int> vec)
// {
//     int count = 0, Ans = 0;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         if (count == 0)
//         {
//             Ans = vec.at(i);
//         }
//         if (Ans == vec.at(i))
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }
//     return Ans;
// }
// int main()
// {
//     vector<int> vec = {1, 5, 1, 5, 2, 5, 2, 5, 3, 5, 5, 2, 5, 5, 4};
//     cout << func(vec);
//     return 0;
// }

/* moore's voting algorithm if majority is not there */
#include <iostream>
#include <vector>
using namespace std;
int func(vector<int> vec)
{
    int count = 0, Ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (count == 0)
        {
            Ans = vec.at(i);
        }
        if (Ans == vec.at(i))
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int Doublecheck = 0;
    for (int value : vec)
    {
        if (value == Ans)
        {
            Doublecheck++;
        }
    }
    if (Doublecheck > (vec.size() / 2))
    {
        return Ans;
    }
    else
    {
        cout << "no majority" << endl;
        return 0;
    }
}
int main()
{
    vector<int> vec = {1, 3, 1, 5, 2, 7, 2, 5, 3, 8, 5, 2, 6, 5, 4};
    cout << func(vec);
    return 0;
}