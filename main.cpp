#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int num1Index = 0;
        int num2Index = 0;
        vector<int> temp;
        while(num1Index < m && num2Index < n)
        {
            if(nums1[num1Index] < nums2[num2Index])
            {
                temp.push_back(nums1[num1Index]);
                num1Index++;
            }
            else 
            {
                temp.push_back(nums2[num2Index]);
                num2Index++;
            }            
        }
    
        while(num1Index < m)
        {
            temp.push_back(nums1[num1Index++]);
            
        }

        while(num2Index < n)
        {
            temp.push_back(nums2[num2Index++]);
        }

        nums1.clear();
        nums1 = temp;
    }
};

int main()
{
  vector<int> num1 = {1,2,4}; 
  vector<int> num2 = {3,7}; 
  Solution obj;

  obj.merge(num1, 3, num2, 2);


  for(int i = 0; i < num1.size(); i++)
    cout << num1[i] << " ";
  cout << endl;

  return 0;
}
