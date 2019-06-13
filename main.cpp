#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> openBracketStack;

        for(char ch : s)
        {
            if(ch == '{' || ch == '[' || ch == '(' )
                openBracketStack.push(ch);
            else
            {
                if(openBracketStack.empty())
                    return false;

                char openBracket = openBracketStack.top();
                openBracketStack.pop();
                char currentBracket = ch;
                switch(ch)
                {
                    case '}':
                        if(openBracket != '{')
                            return false;
                        break;
                    case ']':
                        if(openBracket != '[')
                            return false;
                        break;
                    case ')':
                        if(openBracket != '(')
                            return false;
                        break;
                    default:
                        break;
                }
            }
        }

        if(!openBracketStack.empty())
            return false;
        else
            return true;
    }
};

int main()
{
    Solution obj;
    cout << obj.isValid("()[]{}") << endl;; //valid

    cout << obj.isValid("([)]") << endl; //false

    cout << obj.isValid("][") << endl; //false

    return 0;
}



