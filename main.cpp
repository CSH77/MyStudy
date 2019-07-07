#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() < 1)
            return 0;

        int totalProfit = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[i - 1])
                totalProfit = totalProfit + (prices[i] - prices[i - 1]);
        }

        return totalProfit;
    }
};

int main()
{
    vector<int> input = {7,1,5,3,6,4}; //expected output: 7
    Solution obj;
    cout << obj.maxProfit(input) << endl;

    return 0;
}



