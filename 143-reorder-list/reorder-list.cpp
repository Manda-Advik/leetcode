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
    ListNode* getmiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverselist(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* mid = getmiddle(head);
        ListNode* reversed = reverselist(mid->next);

        mid->next = NULL;

        while (head && reversed) {
            ListNode* nn = head->next;
            ListNode* rn = reversed->next;
            head->next = reversed;
            head->next->next = nn;
            head = nn;
            reversed = rn;
        }
    }
};