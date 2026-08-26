struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool search(ListNode* head, int target) {
    while (head) {
        if (head->val == target) return true;
        head = head->next;
    }
    return false;
}
