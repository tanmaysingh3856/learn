class Solution:
    def sortedListToBST(self, head):
        vals = []
        while head:
            vals.append(head.val)
            head = head.next
        return self.sortedArrayToBST(vals)

    def sortedArrayToBST(self, nums):
        if not nums:
            return None
        mid = len(nums) // 2
        node = TreeNode(nums[mid])
        node.left = self.sortedArrayToBST(nums[:mid])
        node.right = self.sortedArrayToBST(nums[mid+1:])
        return node