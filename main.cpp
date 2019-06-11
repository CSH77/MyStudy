#include <iostream>
#include <vector>

using namespace std;
    
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> vec;
        for(int i = 1; i <= n; i++)
        {
            string temp ="";
            if( i % 3 == 0)
                temp.append("fizz");
            
            if(i % 5 == 0)
                temp.append("buzz");
            
            if( i % 3 != 0 && i % 5 !=0)
                vec.push_back(to_string(i));
            else
                vec.push_back(temp);
            
        }
        return vec;
        
    }
};

int main()
{
    Solution obj;
    vector<string> vec = obj.fizzBuzz(15);

    for(string str : vec)
    {
        cout << str << endl;
    }
        
    return 0;
}



