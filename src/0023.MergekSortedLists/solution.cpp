#include "../../include/solution.h"


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;
        auto res = new ListNode(0);
        auto now = res;
        int min_i = 0;
        while (true) {
            min_i = 0;
            for (int i=0; i < lists.size(); i++) {
                if (my_min(lists[min_i], lists[i])) {
                    min_i = i;
                }
            }
            if (lists[min_i]==NULL) return res->next;
            now->next = lists[min_i];
            now = now->next;
            lists[min_i] = lists[min_i]->next;
        }
    }
private:
    int my_min(ListNode* l1, ListNode* l2) {
        if (l1==NULL && l2==NULL) {
            return 0;
        }
        if (l1==NULL) return 1;
        if (l2==NULL) return 0;
        return l1->val < l2->val ? 0 : 1;
    }
};


int main() {
    // vector<string> lines = {"[1,4,5]","[1,3,4]","[2,6]", "[3,4,5,6,7,8,9]"};
    vector<string> lines = {" "};
    vector<ListNode*> lists;
    for (auto line : lines) {
        ListNode* head = stringToListNode(line);
        lists.push_back(head);
    }
    auto res = Solution().mergeKLists(lists);
    prettyPrintLinkedList(res);
	return 0;
}







