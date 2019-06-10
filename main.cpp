#include <iostream>

using namespace std;

class Solution {
public:
    bool isPrime(int n)
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if( n % i == 0)
                return false;
        }
        return true;
    }

    int countPrimes(int n) {
        int totalPrimeCount = 0;
        for(int i = 2; i <= n; i++)
        {
            if( isPrime(i) )
                totalPrimeCount++;
        }

        return totalPrimeCount;
    }
};

int main()
{
    Solution obj;
    // cout << obj.isPrime(4) << endl;
    cout << obj.countPrimes(10) << endl;

    return 0;
}



