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
private:
    int getlength(ListNode* temp)
    {
        int count = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // if(head->next )
        int length = getlength(head);
        if(length == n)
        {
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }

        int num = length-n;

        int count = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(count<num)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        return head;
        
    }
};