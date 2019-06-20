#include <iostream>
#include <vector>
#include <set>

using namespace std;

/* 
Example 1:
Input: [1,2,3,1]
Output: true

Example 2:
Input: [1,2,3,4]
Output: false
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numSet;

        for(int n : nums)
        {
            auto search = numSet.find(n);
            if(search != numSet.end()) //exsit,
            {
                return true;
            }
            else 
            {
                numSet.insert(n);
            }
        }
        return false;
    }
};

int main()
{
    // vector<int> input = {1,2,3,1};
    vector<int> input = {1,2,3,4};
    Solution obj;
    cout << obj.containsDuplicate(input) << endl;
        
    return 0;
}



