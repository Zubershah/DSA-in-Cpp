// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     /*
//     // vector syntax
//     vector<int> vec; // Size = 0 vector
//     vector<int> vec = {1, 2, 3}; // Size =3 vector with initial value 1 2 3
//     vector<int> vec(3, 6); // size = 3 vector with default value 6
//     */

//     // vector function
//     /*
//     size
//     push_back
//     pop_back
//     front
//     back
//     at
//     */

//     vector<int> vec(3, 6);
//     for (int value : vec) // for each loop
//     {
//         cout << value << endl;
//     }

//     cout << "size of a vector is " << vec.size() << endl;

//     vec.push_back(23);
//     for (int value : vec)
//     {
//         cout << value << endl;
//     }
//     cout << "size of a vector is " << vec.size() << endl;
//     cout << "capacity of a vector is " << vec.capacity() << endl;

//     vec.pop_back();
//     for (int value : vec)
//     {
//         cout << value << endl;
//     }
//     cout << "size of a vector is " << vec.size() << endl;
//     cout << "capacity of a vector is " << vec.capacity() << endl;

//     vec.push_back(23);
//     cout << vec.front() << endl; // print the first vector element
//     cout << vec.back() << endl;  // print the last vector element
//     cout << vec.at(2) << endl;   // print the vector element at index 2
//     cout << "capacity of a vector is " << vec.capacity() << endl;

//     return 0;
// }

// /* Linear Search */
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     int target = 9;
//     for (int check : arr)
//     {
//         if (target == check)
//         {
//             cout << "target found " << check << endl;
//             return 0;
//         }
//     }
//     cout << "target not found" << endl;
//     return 0;
// }

// /* Reverse an vector using function */
// #include <iostream>
// #include <vector>
// using namespace std;
// void func(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size() / 2; i++)
//     {
//         int temp = arr.at(i);
//         arr.at(i) = arr.at(arr.size() - i - 1);
//         arr.at(arr.size() - i - 1) = temp;
//     }
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     func(arr);
//     for (int value : arr)
//     {
//         cout << value << endl;
//     }
//     return 0;
// }