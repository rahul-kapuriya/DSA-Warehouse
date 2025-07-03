#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> map1;
        
        for(int i = 0; i<s.length(); i++)
        {
            if(map1.find(s[i]) == map1.end())
            {
                map1.insert(make_pair(s[i],1));
            }
            else
            {
                map1[s[i]]++;
            }
        }

        for(int i = 0; i<s.length(); i++)
        {
            if(map1[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    return 0;
}