/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *start = head;
        ListNode *p = NULL;
        ListNode *newHead = NULL;

        while (start != NULL)
        {
            if (start->next != NULL && start->next->val == start->val)
            {
                while (start->next != NULL && start->next->val == start->val)
                {
                    start = start->next;
                }
                start = start->next;
            }
            else if (p != NULL)
            {

                // cout<<start->val<<" ";
                p->next = new ListNode(start->val);
                cout << newHead->next->val << " ";
                p = p->next;
                cout << p->val << " ";
                start = start->next;
            }
            else
            {
                p = new ListNode(start->val);
                // p->next=nullptr;
                cout << "here";
                // cout<<p->next<<" "<<start->next<<" ";

                newHead = p;
                // newHead->next=p;
                // cout<<p->next<<" "<<newHead->next;
                start = start->next;
            }
        }
        return newHead;
    }
};