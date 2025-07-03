#include <iostream>
#include <vector>

using namespace std;


    /* <----------------------- DAY-9 -----------------------> */

    // Rotated_Array_189_.


class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> nums2(n,0);
        k %= n;

        for(int i = 0; i<n; i++)
        {
            nums2[(i+k) % n] = nums[i];
        }

        for(int i = 0; i<n; i++)
        {
            nums[i] = nums2[i];
        }

    }
};

int main ()
{
    cout<<"this is it ..."<<endl;

    Solution s1;
    vector<int> v1 = {4,65,7,1,3,10};
    s1.rotate(v1,3);

    for(int jj : v1)
    {
        cout<<jj<<" ";
    }
    cout<<endl;

    return 0;
}