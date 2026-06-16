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
class Solution {
    ListNode* merge(ListNode* &list1,ListNode* &list2)
    {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* next1 = head1->next;
        ListNode* next2 = head2->next;

        while(next1 != NULL && next2 != NULL)
        {
            if((head1->val <= head2->val) && (next1->val >= head2->val))
            {
                next2 = head2->next;
                head1->next = head2;
                head2->next = next1;
                head1 = head2;
                head2 = next2;
            }
            else{
                head1 = next1;
                next1 = next1->next;

            }
        }
        if(next1 == nullptr)
        {
            head1->next = head2;
            // return list1;
        }
        return list1;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL)
        {
            return list2;
        }
        else if(list2 == NULL)
        {
            return list1;
        }

        if(list1->val < list2->val)
        {
            return merge(list1,list2);
        }
        else{
            return merge(list2,list1);
        }
        
    }
};