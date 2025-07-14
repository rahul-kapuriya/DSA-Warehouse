#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int compress(vector<char>& chars)
    {
        int idx = 0;
        for(int i = 0; i<chars.size(); i++)
        {
            char ch = chars[i];
            int count = 0;

            while(i<chars.size() && chars[i] == ch)
            {
                count++;
                i++;
            }

            if(count == 1)
            {
                chars[idx++] = ch;
            }
            else
            {
                chars[idx++] = ch;
                string str = to_string(count);
                for(char cc : str)
                {
                    chars[idx++] = cc;
                }

            }
            i--;

        }
        chars.resize(idx);
        return chars.size();
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;

    vector<char> v1 = {'a','a','b','b','c','c','c'};
    Solution s1;
    cout<<s1.compress(v1);

    for(char cc : v1)
    {
        cout<<cc<<" ";
    }
    cout<<endl;

    return 0;
}