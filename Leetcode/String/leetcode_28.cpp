#include <iostream>
#include <string>

using namespace std;

    /* find the first occurrence in string */

class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.find(needle);
        return n;
    }
};

int main ()
{

    return 0;
}