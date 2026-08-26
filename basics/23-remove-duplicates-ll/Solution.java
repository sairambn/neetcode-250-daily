import java.util.*;

class ListNode {
    int val;
    ListNode next;
    ListNode(int val) { this.val = val; }
}

class Solution {
    public ListNode removeDuplicates(ListNode head) {
        if (head == null) return null;
        Set<Integer> seen = new HashSet<>();
        ListNode curr = head;
        seen.add(curr.val);
        while (curr.next != null) {
            if (seen.contains(curr.next.val)) {
                curr.next = curr.next.next;
            } else {
                seen.add(curr.next.val);
                curr = curr.next;
            }
        }
        return head;
    }
}
