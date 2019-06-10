#include <iostream>

using namespace std;

class Solution {
public:
    bool isPrime(int n)
    {
        if( n <= 1)
            return false;
        if(n <= 3)
            return true;

        if( n % 2 == 0 || n % 3 == 0)
            return false;

        for(int i = 5; i * i <= n; i = i + 6)
        {
            if( n % i == 0 || n % (i + 2) == 0)
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
    cout << obj.isPrime(4997) << endl;
    // cout << obj.countPrimes(10) << endl;

    return 0;
}



