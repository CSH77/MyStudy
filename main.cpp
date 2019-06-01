#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int currentMax = 0;
        int prevMax = 0;
        for(int x : nums)
        {
            int temp = currentMax;
            currentMax = max(prevMax + x, currentMax);
            prevMax = temp;
        }
        return currentMax;
    }
};

int main()
{
    //vector<int> input = {1,2,3,1}; //expected output 4;
    vector<int> input = {2,7,9,3,1}; //expected output 12;
    Solution obj;
    cout << obj.rob(input);

    return 0;
}



