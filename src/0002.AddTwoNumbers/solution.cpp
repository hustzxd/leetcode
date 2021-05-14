#include "../../include/solution.h"


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* p = dummy;
        int carry = 0;
        while (l1 && l2) {
            ListNode* next = new ListNode();
            next->val = (l1->val + l2->val + carry) % 10;
            carry = (l1->val + l2->val + carry) / 10;
            p->next = next;
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l2 != nullptr) {
            l1 = l2;
        }
        while (l1) {
            ListNode* next = new ListNode();
            next->val = (l1->val + carry) % 10;
            carry = (l1->val + carry) / 10;
            p->next = next;
            p = p->next;
            l1 = l1->next;
        }
        if (carry == 1) {
            ListNode* next = new ListNode(1);
            p->next = next;
        }
        return dummy->next;
    }
};


int main() {
	string line;
    while (getline(cin, line)) {
        ListNode* l1 = stringToListNode(line);
        getline(cin, line);
        ListNode* l2 = stringToListNode(line);
        
        ListNode* ret = Solution().addTwoNumbers(l1, l2);

        string out = listNodeToString(ret);
        cout << out << endl;
    }
    return 0;
}