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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* slow = head;
        ListNode* fast = slow->next;
        ListNode* e1;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        e1 = slow;

        // cout<<e1->val;

        ListNode* s1 = head;
        ListNode* s2 = e1->next;
        ListNode* prev = nullptr;
        ListNode* hold;
        slow->next = nullptr;

        while (s2) {
            hold = s2->next;
            s2->next = prev;
            prev = s2;
            s2 = hold;
        }
        s2 = prev;
        

        while (s2) {
            ListNode* temp = s1->next;
            ListNode* temp2 = s2->next;
            s1->next = s2;
            s2->next = temp;
            s1 = temp;
            s2 = temp2;
        }

        

        // cout << head->val;

        // display(head);
    }

    void display(ListNode* check) {
        while (check) {
            cout << check->val;
            check = check->next;
        }
    }
};
