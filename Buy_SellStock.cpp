#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> price = {14, 10, 5, 3, 6, 4, 1, 1, 3, 6};
    int maxprofit = 0, buy = INT_MAX, sell = 0;
    for (int i = 0; i < price.size(); i++)
    {
        buy = min(buy, price[i]);
        if (price[i] > buy)
        {
            maxprofit = max(maxprofit, price[i] - buy);
            sell = max(sell, price[i]);
        }
    }
    cout << "Stock Buy at " << buy << endl;
    cout << "Stock sell at " << sell << endl;
    cout << "maximum profit after stock sell is " << maxprofit << endl;
    return 0;
}