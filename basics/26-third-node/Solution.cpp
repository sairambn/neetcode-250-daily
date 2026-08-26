struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* getThird(ListNode* head) {
    if (!head || !head->next || !head->next->next) return nullptr;
    return head->next->next;
}
