#include <iostream>
#include <vector>

using namespace std;

/*
Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> myVec;

        // if( numRows <= 0)
        //     return myVec;

        for(int i = 0; i < numRows; i++)
        {
            vector<int> temp;
            for(int j = 0; j <= i; j++)
            {
                if(j > 0 && j < i && i > 0)
                {
                    int num = myVec[i - 1][j - 1] + myVec[i - 1][j];
                    temp.push_back(num);

                }
                else
                {
                    temp.push_back(1);
                }
            }
            myVec.push_back(temp);
        }

        return myVec;
    }
};


int main()
{
    Solution obj;
    vector<vector<int>> myVec =  obj.generate(0);

    for(int i = 0; i < myVec.size(); i++)
    {
        for(int j = 0; j < myVec[i].size(); j++)
        {
            cout << myVec[i][j] << " ";
        }
        cout << endl;
    }

    // for(vector<int> vec : myVec)
    // {
    //     for(int n : vec)
    //     {
    //         cout << n << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}



