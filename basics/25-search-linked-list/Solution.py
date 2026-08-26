class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def search(head: ListNode, target: int) -> bool:
    while head:
        if head.val == target:
            return True
        head = head.next
    return False
