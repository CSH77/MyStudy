#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int len;
    ListNode* reverse(ListNode* node)
    {
        ListNode* prev = NULL;
        ListNode* current = node;
        ListNode* next;

        while(current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    ListNode* findMid(ListNode* node) 
    {
        ListNode* slow = node;
        ListNode* fast = node;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        if(!fast)
            len = 1;
        
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        
        ListNode* mid = findMid(head);
        ListNode* current1 = head;
        ListNode* current2;

        if(len)
            current2 = mid;
        else 
            current2 = mid->next;
        

        ListNode*  rev2 = reverse(current2);
        while(rev2)
        {
            if(rev2->val != current1->val )
                return false;
            rev2 = rev2->next;
            current1 = current1->next;
        }
        return true;
    }
};


/* 
Example 1:
Input: 1->2
Output: false

Example 2:
Input: 1->2->2->1
Output: true
 */

int main()
{
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);

    ListNode* node3 = new ListNode(1);    
    ListNode* node4 = new ListNode(2);
    ListNode* node5 = new ListNode(2);
    ListNode* node6 = new ListNode(1);

    node1->next = node2;    
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    
    Solution obj;
    
    cout << obj.isPalindrome(node1) << endl; //expect 0 false,
    cout << obj.isPalindrome(node3) << endl; //expect 1 true;

    return 0;
}




