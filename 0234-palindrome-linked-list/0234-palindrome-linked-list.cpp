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
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;
        
        ListNode* mid = findMid(head);
        ListNode* rev = reverse(mid->next);
        ListNode* curr {head};
        
        while (rev) {
            if (curr->val != rev->val)
                return false;
            curr = curr->next;
            rev = rev->next;
        }
        
        return true;
    }
    
    
    ListNode* reverse(ListNode* head) {
        ListNode* curr {head};
        ListNode* prev {nullptr};
        while (curr) {
            ListNode* next {curr->next};
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* findMid(ListNode* head) {
        if (!head)
            return head;
        
        ListNode* slow {head}, *fast {head};
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};