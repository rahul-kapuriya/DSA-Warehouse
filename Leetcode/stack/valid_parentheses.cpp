#include <iostream>
#include <stack>

using namespace std;

class Solution 
{
public:
    bool isValid(string s) 
    {
        bool isyes = true;
        stack<char> s1;

        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1.push(s[i]);
            }
            else
            {
                if(s1.empty())
                {
                    isyes = false;
                }
                char sTop = s1.top();
                if(s[i] == ')' && sTop != '(' ||
                   s[i] == ']' && sTop != '[' ||
                   s[i] == '}' && sTop != '{')
                {
                    isyes = false;
                    cout<<"is yes : "<<isyes<<endl;
                }
                s1.pop();
                
            }
        }
        return isyes;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    Solution s;
    cout<<s.isValid("()");

    return 0;
}