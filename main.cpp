#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

        //xor
        int xorNum = x ^ y;

        while( xorNum != 0 )
        {
            if( xorNum & 1 )
            {
                count++;
            }
            xorNum = xorNum >> 1;
        }
        return count;
    }
};


int main()
{
    Solution obj;
    //cout << obj.hammingDistance(1,4) << endl;
    cout << obj.hammingDistance(93,73) << endl;

    return 0;
}



