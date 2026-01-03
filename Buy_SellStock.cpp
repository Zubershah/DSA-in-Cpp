#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> price = {145, 10, 5, 3, 6, 4};
    int maxprofit = 0, buy = INT_MAX;
    for (int i = 0; i < price.size(); i++)
    {
        if (price[i] > buy)
        {
            maxprofit = max(maxprofit, price[i] - buy);
        }
        buy = min(buy, price[i]);
    }
    cout << "best stock price is " << buy << endl;
    cout << "maximum profit is " << maxprofit << endl;
    return 0;
}