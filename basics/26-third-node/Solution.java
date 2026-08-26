class ListNode {
    int val;
    ListNode next;
    ListNode(int val) { this.val = val; }
}

class Solution {
    public ListNode getThird(ListNode head) {
        if (head == null || head.next == null || head.next.next == null) return null;
        return head.next.next;
    }
}
