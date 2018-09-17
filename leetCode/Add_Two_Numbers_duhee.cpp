/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int nextNum = 0; int carry = 0;
        ListNode* resultNode = new ListNode(0);
        ListNode* firstResultNode;
        while(l1 != NULL || l2 != NULL)
        {
            int l1v = 0, l2v = 0;
            if(l1 != NULL)
            {
                l1v = l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                l2v = l2->val;
                l2 = l2->next;
            }
            nextNum = l1v+l2v+carry;
            if(nextNum >= 10)
                carry = 1;
            else
                carry = 0;
            nextNum %= 10;
            if(resultNode->next == NULL)
            {
                resultNode->val = nextNum;
                firstResultNode = resultNode;
            }
            else
            {
                resultNode = resultNode->next;
                resultNode->val = nextNum;
            }
            resultNode->next = new ListNode(0);
        }
        if(carry == 1)
        {
            resultNode->next->val = 1;
        }
        else
        {
            resultNode->next = NULL;
        }
        return firstResultNode;
    }
};
