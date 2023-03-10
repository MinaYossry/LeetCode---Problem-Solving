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
    ListNode* reverse(ListNode* start, ListNode* prev, ListNode* target)
    {
       if (!target)
           return start;
        
        ListNode* temp = target->next;
        target->next = start;
        prev->next = temp;
        
        return reverse(target, prev, prev->next);
    }
    
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;
        
        return reverse(head, head, head->next);
    }
//     ListNode* reverseList(ListNode* head) {
        
        
        
        
//         if (!head || !head->next)
//             return head;
        
//         stack<ListNode*> nodes;
//         ListNode* trav = head;
//         while(trav)
//         {
//             nodes.push(trav);
//             trav = trav->next;
//         }
        
//         ListNode* reversed = nodes.top();
//         nodes.pop();
//         trav = reversed;
        
//         while(!nodes.empty())
//         {
//             trav->next = nodes.top();
//             nodes.pop();
            
//             trav = trav->next;
            
//         }
        
//         trav->next = nullptr;
        
//         return reversed;
//     }
};