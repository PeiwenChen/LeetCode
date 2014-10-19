

class RandomListNode:
  def __init__(self, x):
    self.label = x
    self.next = None
    self.random = None

class Solution:
    # @param head, a RandomListNode
    # @return a RandomListNode
    def copyRandomList(self, head):
        if (not head):
            return None
        headNode = RandomListNode(head.label)
        prevnode = headNode
        listnode = head
        labellist = []
        # copy all nodes
        while (listnode.next!= None):
            " walk the list"
            listnode = listnode.next
            label = listnode.label
            if (not (label in labellist)):
		print "label %s not added, create a node" %label
                newNode = RandomListNode(label)
                labellist.append(label)
                prevnode.next = newNode 
                #random node
                if (listnode.random):
                    randomlabel = listnode.random.label
                    if (not (randomlabel in labellist)):
			print "randomlabel %s not added, create a node" %randomlabel
                        newRandomNode = RandomListNode(randomlabel)
                        labellist.append(randomlabel)
                        prevnode.random = newRandomNode
        prevnode.next = None # add this
        return headNode

node = RandomListNode(-1)
node2 = RandomListNode(-1)
node.next = node2 

solution = Solution()
return_node = solution.copyRandomList(node)
while (return_node.next != None):
  print "return_node (label %s : random %s) " %(return_node.label, return_node.random)
  return_node = return_node.next


""" comments:
1. need check None ptr/objects for linked listi
2. may use C could be fastest"""
