class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_length(head: ListNode) -> int:
    length = 0
    while head:
        length += 1
        head = head.next
    return length
