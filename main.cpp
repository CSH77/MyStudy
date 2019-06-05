#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <chrono>

using namespace std;

class Solution
{
    public:
        void shuffle(vector<int>& vec)
        {
            for(int i = vec.size() - 1; i >= 0; i--)
            {
                unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
                std::default_random_engine generator(seed);
                std::uniform_int_distribution<int> distribution(1, vec.size());
                int j = distribution(generator);

                //int diceRoll = distribution(generator);
                swap(vec[i], vec[j]);
            }
        }

};

int main()
{
    vector<int> input = {1,2,3,4,5,6,7};
    Solution obj;
    obj.shuffle(input);

    for(int n : input)
        cout << n << " ";
    cout << endl;

    return 0;
}