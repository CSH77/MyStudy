#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int minPrice = INT32_MAX;

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
                minPrice = prices[i];
            else if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }

        return maxProfit;
    }
};

int main()
{
    vector<int> input = {7,1,5,3,6,4}; //expected output: 5
    Solution obj;
    cout << obj.maxProfit(input) << endl;

    return 0;
}



