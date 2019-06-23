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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* leftNode = l1;
        ListNode* rightNode = l2;
        ListNode* tempNode = new ListNode(0);
        ListNode* head = tempNode;

        while(leftNode != NULL && rightNode != NULL)
        {
            if(leftNode->val <= rightNode->val)
            {
                tempNode->next = leftNode;
                leftNode = leftNode->next;
                tempNode = tempNode->next;
            }
            else
            {
                tempNode->next = rightNode;
                rightNode = rightNode->next;
                tempNode = tempNode->next;
            }
        }

        while(leftNode != NULL)
        {
            tempNode->next = leftNode;
            leftNode = leftNode->next;
            tempNode = tempNode->next;
        }

        while(rightNode != NULL)
        {
            tempNode->next = rightNode;
            rightNode = rightNode->next;
            tempNode = tempNode->next;
        }

        ListNode* delNode = head;
        head = head->next;
        delete delNode;
        return head;

    }
};
/* 
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
 */
int main()
{
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(4);
    
    ListNode* node4 = new ListNode(1);
    ListNode* node5 = new ListNode(3);
    ListNode* node6 = new ListNode(4);

    node1->next = node2;
    node2->next = node3;
    
    node4->next = node5;
    node5->next = node6;
    
    Solution obj;
    ListNode* node = obj.mergeTwoLists(node1, node5);

    while(node != NULL)
    {
        cout << node->val << " ";
        node = node->next;
    }



    return 0;
}




