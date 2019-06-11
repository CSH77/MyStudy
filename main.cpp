#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count = 0;
        while(n)
        {
            count = count + (n & 1);
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    uint32_t num = 11; //expect 3

    Solution obj;
    cout << obj.hammingWeight(num);

    return 0;
}



