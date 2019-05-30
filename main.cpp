#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = INT32_MIN;
        int maxSum = INT32_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            currentSum = max(currentSum, 0) + nums[i];
            maxSum = max(maxSum, currentSum);
        }    
    
        return maxSum;
    }
};

int main()
{
    //[4,-1,2,1] has the largest sum = 6.
    //vector<int> input = {-2,1,-3,4,-1,2,1,-5,4}; //output 6

    vector<int> input = {-1};
    Solution obj;
    cout << obj.maxSubArray(input);

    return 0;
}



