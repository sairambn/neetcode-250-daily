#include <unordered_set>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeDuplicates(ListNode* head) {
    if (!head) return nullptr;
    std::unordered_set<int> seen;
    ListNode* curr = head;
    seen.insert(curr->val);
    while (curr->next) {
        if (seen.count(curr->next->val)) {
            curr->next = curr->next->next;
        } else {
            seen.insert(curr->next->val);
            curr = curr->next;
        }
    }
    return head;
}
