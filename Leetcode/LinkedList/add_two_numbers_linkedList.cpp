#include <iostream>

using namespace std;


struct ListNode 
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode nextt) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* newhead = new ListNode();
        ListNode* nextt = newhead;
        
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry; 
            carry = sum / 10;
            ListNode* newnodee = new ListNode(sum % 10);
            nextt->next = newnodee;
            nextt = nextt->next;
        }
        return newhead->next;
        
    }
};

int main ()
{
    cout<<"this is it ..."<<endl;
    return 0;
}