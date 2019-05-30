#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxHere = 0;
        int maxEntire = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            maxHere = maxHere + nums[i];
            if(maxHere < 0)
                maxHere = 0;
            else if(maxHere > maxEntire)
                maxEntire = maxHere;    
        }    
    
        return maxEntire;
    }
};

int main()
{
    //[4,-1,2,1] has the largest sum = 6.
    vector<int> input = {-2,1,-3,4,-1,2,1,-5,4}; //output 6

    Solution obj;
    cout << obj.maxSubArray(input);

    return 0;
}



