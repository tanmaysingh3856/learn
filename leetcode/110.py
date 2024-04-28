class Solution:
    def isBalanced(self, root):
        def height(node):
            if not node or abs(height(node.left) - height(node.right)) > 1:
                return -1
            return max(height(node.left), height(node.right)) + 1

        return height(root) >= 0