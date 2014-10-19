
class ListNode:
  def __init(self, x):
    self.val = x
    self.next = None


def hasCycle(head):
  dic = {}
  if not head:
    return False
  if len(head) == 1:
    return True
  for value in head:
    if not dic.get(value):
      dic[value] = 1 # add to dict
    else:
        return True # loop in list  
  return False


head = {1,2}
print hasCycle(head)


