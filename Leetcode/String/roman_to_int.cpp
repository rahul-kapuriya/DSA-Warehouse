#include <iostream>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    int romanToInt(string s) 
    {
        unordered_map<char,int> m1;
        m1 = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int result = 0;

        for(int i = 0; i<s.length()-1; i++)
        {
            if(m1[s[i]] < m1[s[i+1]])
            {
                result += m1[s[i+1]] - m1[s[i]];
                i++;
            }
            else
            {
                result += m1[s[i]];
            }
        }

        return result;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    string s = "MCMXCIV";
    Solution s1;
    int result = s1.romanToInt(s);
    cout<<result<<endl;

    return 0;
}