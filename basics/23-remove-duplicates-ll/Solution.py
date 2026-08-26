class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def remove_duplicates(head: ListNode) -> ListNode:
    if not head:
        return None
    seen = set()
    curr = head
    seen.add(curr.val)
    while curr.next:
        if curr.next.val in seen:
            curr.next = curr.next.next
        else:
            seen.add(curr.next.val)
            curr = curr.next
    return head
