/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 8th April, 2020
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int counter = 0;
        ListNode *temp = head;
        while (temp != NULL){
            ++counter;
            temp = temp->next;
        }
        int middle_one = (counter / 2) + 1;
        int i = 1;
        temp = head;
        while (i < middle_one){
            ++i;
            temp = temp->next;
        }
        
        return temp;
    }
};
