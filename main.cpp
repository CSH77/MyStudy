#include <iostream>
#include <vector>

using namespace std;

//rotate array.
//1,2,3,4,5,6,7

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        auto ptr = nums.end() - k;

        vector<int> temp =  vector<int>(ptr, nums.end() );

        for(int i = nums.size() - k - 1; i >=0 ; i--)
        {
            nums[i + k] = nums[i];
        }

        for(int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
        

    }
};

int main()
{
    vector<int> input = { 1,2,3,4,5,6,7 };

    Solution obj;
    obj.rotate(input, 3);
    cout << endl;

    for(int n : input)
    {
        cout << n << " ";
    }
    cout << endl;
        
    return 0;
}



