#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                zero++;
            }
            else if(nums[i] == 1)
            {
                one++;
            }
            else if(nums[i] == 2)
            {
                two++;
            }
        }
        int n= nums.size();
        int i = 0;
        while(zero > 0 && i<n)
        {
            nums[i++] = 0;
            zero--;
        }
        while(one > 0 && i<n)
        {
            nums[i++] = 1;
            one--;
        }
        while(two > 0 && i<n)
        {
            nums[i++] = 2;
            two--;
        }
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;

    vector<int> v1 = {2,0,2,1,0,1};
    Solution s1;
    s1.sortColors(v1);
    for(int value : v1)
    {
        cout<<value<<" ";
    }

    return 0;
}