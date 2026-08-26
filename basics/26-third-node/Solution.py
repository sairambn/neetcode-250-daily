class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_third(head: ListNode) -> ListNode:
    if not head or not head.next or not head.next.next:
        return None
    return head.next.next
