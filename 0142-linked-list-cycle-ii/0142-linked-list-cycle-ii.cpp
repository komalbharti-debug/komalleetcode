/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        unordered_set<ListNode*> visited;

        ListNode* curr = head;

        while (curr != NULL) {

            // Agar same node dobara mil gaya
            if (visited.find(curr) != visited.end()) {
                return curr;
            }

            // Current node ko store karo
            visited.insert(curr);

            curr = curr->next;
        }

        // Cycle nahi hai
        return NULL;
    }
};