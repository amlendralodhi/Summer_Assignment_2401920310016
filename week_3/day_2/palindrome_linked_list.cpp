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
    ListNode* getmid(ListNode* temp)
    {
        ListNode* fast = temp->next;
        ListNode* slow = temp;
        while(fast!= NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }  
    ListNode* reverse(ListNode* &temp)
    {
        ListNode* curr = temp;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
        
    }  
public:
    bool isPalindrome(ListNode* head) {

        if(head == NULL && head->next == NULL)
        {
            return false;
        }

        // int length = getLength(head);
        // int n = 0;
        ListNode* temp = getmid(head);
        // int mid = length/2;
        ListNode* Middle = reverse(temp->next);

        ListNode *fast = head;
        ListNode* slow = Middle;

        while(slow != NULL )
        {
            if(slow->val != fast->val)
            {
                return false;
            }
            else{
                slow = slow->next;
                fast = fast->next;
            }
        }
        return true;



        
    }
};