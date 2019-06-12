#include <iostream>
#include <bitset>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        int reversedNum = 0;
        for(int i = 31; i > 0; i--)
        {
            reversedNum = reversedNum + (n & 1);
            reversedNum = reversedNum << 1;
            n = n >> 1;

            if( i == 1)
                reversedNum = reversedNum + (n & 1);
        }
        return reversedNum;
    }
};

int main()
{
    // int num = 15; // 0000 1111  reverse it should be 1111 0000 0000 ....
    uint32_t num = 4294967293; //  Expect: 3221225471 (10111111111111111111111111111111)

    cout << bitset<32>(num) << endl;

    Solution obj;
    uint32_t reversedNum = obj.reverseBits(num);
    cout << bitset<32>(reversedNum) << endl;

    return 0;
}



