#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        
        sort(strs.begin(),strs.end());
        
        string first = strs[0];
        string last = strs[strs.size()-1];
        string answer;

        for(int i = 0; i<first.size(); i++)
        {
            if(first[i] != last[i])
            {
                break;
            }
            answer.push_back(first[i]);
        }
        
        return answer;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    
    vector<string> s1 = {"helo","helloss","herahul","heabc","he"};
    string answer;

    Solution s11;
    answer = s11.longestCommonPrefix(s1);
    
    
    cout<<answer<<endl;

    return 0;
}