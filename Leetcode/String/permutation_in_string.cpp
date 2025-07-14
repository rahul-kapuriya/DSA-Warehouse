#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution 
{
public:

    bool isSame(int freq1[], int freq2[])
    {
        for(int i = 0; i<26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) 
    {
        int freq[26] = {0};
        for(int i = 0; i<s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.length();

        for(int i = 0; i<s2.length(); i++)
        {
            int windIdx = 0;
            int idx = i;
            int windFreq[26] = {0};

            while(windIdx < windowSize && idx < s2.length())
            {
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if(isSame(freq,windFreq)) return true;

        }
        return false;
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;

    string s1 = "ab";
    string s2 = "eidbaooao";

    Solution s11;
    cout<<s11.checkInclusion(s1,s2)<<endl;

    return 0;
}