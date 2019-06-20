#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 
Given two arrays, write a function to compute their intersection.
Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int num1Index = 0;
        int num2Index = 0;
        vector<int> temp;
        while(num1Index < nums1.size() && num2Index < nums2.size())
        {
            if(nums1[num1Index] == nums2[num2Index] )
            {
                temp.push_back(nums1[num1Index]);
                num1Index++;
                num2Index++;
            }
            else if(nums1[num1Index] < nums2[num2Index] )
            {
                num1Index++;
            }
            else 
            {
                num2Index++;
            }
        }

        return temp;      
    }
};

    
int main()
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution obj;
    vector<int> vec = obj.intersect(nums1, nums2);


    for(int n : vec) 
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}



