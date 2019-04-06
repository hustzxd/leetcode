#include "../../include/solution.h"


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        auto tail = head;
        while (tail) {
            len++;
            tail = tail->next;
        }
        int id = 0;
        ListNode* fake_head = new ListNode(0);
        fake_head->next = head;
        tail = fake_head;
        while (tail) {
            if (id == len - n) {
                if (tail->next) 
                    tail->next = tail->next->next;
                break;
            }
            tail = tail->next;
            id++;
        }
        return fake_head->next;
    }
};

int main() {
	string line;
    while (getline(cin, line)) {
        ListNode* head = stringToListNode(line);
        prettyPrintLinkedList(head);
        head = Solution().removeNthFromEnd(head, 2);
        prettyPrintLinkedList(head);
    }
    return 0;
}