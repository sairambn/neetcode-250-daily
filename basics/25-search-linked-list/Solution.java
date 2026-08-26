class ListNode {
    int val;
    ListNode next;
    ListNode(int val) { this.val = val; }
}

class Solution {
    public boolean search(ListNode head, int target) {
        while (head != null) {
            if (head.val == target) return true;
            head = head.next;
        }
        return false;
    }
}
