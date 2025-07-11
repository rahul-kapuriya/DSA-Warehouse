#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        /* Time Complexity O(n log n)*/

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s == t;

        /* Time Complexity is O (s + t)*/

        // unordered_map <char,int> map1;
        // unordered_map <char,int> map2;

        // for(int i = 0; i<s.length(); i++)
        // {
        //     if(map1.find(s[i]) == map1.end())
        //     {
        //         map1.insert(make_pair(s[i],1));
        //     }
        //     else
        //     {
        //         map1[s[i]]++;
        //     }
            
        // }
        // for(int i = 0; i<t.length(); i++)
        // {
        //     if(map2.find(t[i]) == map2.end())
        //     {
        //         map2.insert(make_pair(t[i],1));
        //     }
        //     else
        //     {
        //         map2[t[i]]++;
        //     }
            
        // }

        // return (map1 == map2);
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    string s1 = "abcdjsacbdcualaef";
    string s2 = "abc";
    Solution s11;
    s11.isAnagram(s1,s2);
    
    return 0;
}