#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:
Input: [2,2,1]
Output: 1

Example 2:
Input: [4,1,2,1,2]
Output: 4
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int total = 0;
        for(int n : nums) 
        {
            total = total ^ n;
        }      
        return total;
    }
};

int main()
{
    // vector<int> input = {2,2,1};
    vector<int> input = {4,1,2,1,2};
    Solution obj;
    cout << obj.singleNumber(input) << endl;
        
    return 0;
}



