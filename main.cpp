#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*     
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:
Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Example 2:
Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        
        int currentIndex = 0;
        digits[currentIndex] += 1;
        bool moveOver = false;
        vector<int> temp;

        while(currentIndex < digits.size())
        {
            if(moveOver)
            {
                digits[currentIndex] += 1;
                moveOver = false;
            }

            if(digits[currentIndex] > 9 )
            {
                digits[currentIndex] = digits[currentIndex] % 10;
                moveOver = true;
            }
            
            currentIndex++;
        }

        if(moveOver)
        {
            digits.push_back(1);
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main()
{
    // vector<int> vec = {1,2,3};
    vector<int> vec = {8,9,9};
    Solution obj;

    for(int n : vec)
    {
        cout << n << " ";
    }
    cout << endl;

    obj.plusOne(vec);

    for(int n : vec)
    {
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}



