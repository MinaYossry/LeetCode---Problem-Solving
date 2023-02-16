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
    ListNode* mergeNodes(ListNode* head) {
        if (!head)
            return head;
        
        ListNode* newHead = new ListNode(head->next->val);
        
        ListNode* travOld = head->next->next;
        ListNode* travNew = newHead;
        
        while(travOld)
        {
            if (travOld->val == 0 && travOld->next)
            {
                travNew->next = new ListNode();
                travNew = travNew->next;
            } 
            else
                travNew->val += travOld->val;
            
            travOld = travOld->next;
        }
        
        return newHead;
//         if (!head)
//             return head;
        
//         ListNode* temp = head;
//         head = head->next;
//         delete temp;
//         ListNode* trav = head;
        
//         while (trav && trav->next)
//         {
//             if (trav->next && trav->next->val != 0)
//             {
//                 ListNode* temp = trav->next;
//                 trav->val += trav->next->val;
//                 trav->next = temp->next;
//                 temp->next = nullptr;
//                 delete temp;
//             }
            
//             if (trav->next && trav->next->val == 0 && !trav->next->next)
//             {
//                 delete trav->next;
//                 trav->next = nullptr;
//             }
               
            
//             else if (trav->next && trav->next->val == 0)
//                 trav = trav->next;
            
//         }
        
//         return head;
    }
};