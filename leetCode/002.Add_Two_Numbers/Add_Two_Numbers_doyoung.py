# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        sum = l1.val + l2.val
        com = int(sum / 10)
        val = sum % 10

        result = ListNode(val)

        before_node = result

        n1 = l1
        n2 = l2

        while True:
            n1 = n1.next if n1 != None else None
            n2 = n2.next if n2 != None else None

            if n1 == None and n2 == None:
                break
            else:
                sum = com
                if n1 != None:
                    sum += n1.val
                if n2 != None:
                    sum += n2.val

                com = int(sum / 10)
                val = sum % 10

                before_node.next = ListNode(val)
                before_node = before_node.next

        if com != 0:
            before_node.next = ListNode(com)

        return result
