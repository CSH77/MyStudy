#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalNum = 0;
        int total = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            totalNum = totalNum + nums[i];
            total = total + (i + 1);
        }
        int missingNum = total - totalNum;

        return missingNum;
    }

};


int main()
{
    Solution obj;
    vector<int> input = {9,6,4,2,3,5,7,0,1};

    cout << obj.missingNumber(input) << endl;

    return 0;
}
