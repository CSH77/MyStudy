#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

class Solution {
public:
    int32_t getMaximumPowerofNumber(int n)
    {
        int32_t num = 0;
        int32_t maxNum = 0;
        for(unsigned int i = 1; i < UINT32_MAX; i++)
        {
            num = pow(n, i);
            if(num < 0)
                break;

            maxNum = num;
        }

        return maxNum;
    }

    bool isPowerOfThree(int n) {

        return ( getMaximumPowerofNumber(n) % n == 0);
    }
};

int main()
{
    Solution obj;
    // cout << obj.getMaximumPowerofNumber(3);
    cout << obj.isPowerOfThree(45);

    return 0;
}



