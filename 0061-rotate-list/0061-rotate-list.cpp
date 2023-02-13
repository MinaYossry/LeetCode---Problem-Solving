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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0)
            return head;
        
        int size = 0;
        auto trav = head;
        auto end = trav;
        while(trav)
        {
            size++;
            end = trav;
            trav = trav->next;
        }
        
        k %= size;
        
        if (k == 0)
            return head;
        
        int offset = size - k;
        ListNode* start = head;
        while(--offset)
            start = start->next;
        
        end->next = head;
        head = start->next;
        start->next = nullptr;
        
        return head;
    }
};