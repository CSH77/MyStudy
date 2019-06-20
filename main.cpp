#include <iostream>
#include <vector>

using namespace std;
/* 
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(unsigned int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                int nonZeroIndex = i;
                while(nonZeroIndex < nums.size() - 1 )
                {
                   if(  nums[nonZeroIndex] != 0 )
                   {
                       break;
                   }
                   nonZeroIndex++;
                }

                nums[i] = nums[nonZeroIndex];
                nums[nonZeroIndex] = 0;
            }
        }        
        
    }
};

int main()
{
    vector<int> input = {0,1,0,3,12};
    Solution obj;
    obj.moveZeroes(input);

    for(int n : input)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}



