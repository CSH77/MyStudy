#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i; j < prices.size(); j++)
            {
                int profit = prices[j] - prices[i];
                maxProfit = max(maxProfit, profit);
            }
        }

        if(maxProfit <= 0)
            return 0;
        else
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



