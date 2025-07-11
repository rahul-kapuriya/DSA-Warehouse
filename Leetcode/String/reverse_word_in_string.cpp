#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    string reverseWords(string& s) 
    {
        string answer;   
        
        reverse(s.begin(),s.end());

        int n = s.length();

        for(int i = 0; i<s.length(); i++)
        {
            string word;
            while(i < n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            answer += " " + word;
        }

        cout<<answer<<endl;
        return answer.substr(1);
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    
    string s1 = "the sky is blue";
    Solution obj;
    s1 = obj.reverseWords(s1);
    cout<<s1<<endl;

    return 0;
}