#include <iostream>

using namespace std;

class Solution 
{
public:
    string removeOccurrences(string s, string part) 
    {
        while(s.find(part)<s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    
    string s = "daabcbaabcbc";
    string part = "abc";
    Solution s1;
    cout<<s<<endl;
    s = s1.removeOccurrences(s,part);
    cout<<s<<endl;
    return 0;
}