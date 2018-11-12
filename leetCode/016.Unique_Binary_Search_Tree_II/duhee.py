#ss TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def generateTrees(self, n):
        if n == 0:
            return list()
        """
        :type n: int
        :rtype: List[TreeNode]
        """
        self.subTreeDict = dict()
        return self.generateTreesGivenRange(1, n)
    def generateTreesGivenRange(self, start, end):
        if (start, end) in self.subTreeDict:
            return self.subTreeDict[(start, end)]
        if start > end:
            return list([None])
        leftSubTrees = list()
        rightSubTrees = list()
        returnTrees = list()
        for i in range (start, end+1):
            leftSubTrees = self.generateTreesGivenRange(start, i-1)
            rightSubTrees = self.generateTreesGivenRange(i+1, end)
            for left in leftSubTrees:
                for right in rightSubTrees:
                    rootNode = TreeNode(i)
                    rootNode.left = left
                    rootNode.right = right
                    returnTrees.append(rootNode)
        if (start, end) not in self.subTreeDict:
            self.subTreeDict[(start, end)] = returnTrees
        return returnTrees
