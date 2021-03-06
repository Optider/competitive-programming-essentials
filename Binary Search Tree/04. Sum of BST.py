class BST_node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


class BST:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if self.root == None:
            self.root = BST_node(val)
            return

        cur = self.root
        new_node = BST_node(val)
        while True:
            if val < cur.val:
                if cur.left != None:
                    cur = cur.left
                else:
                    cur.left = new_node
                    return
            else:
                if cur.right != None:
                    cur = cur.right
                else:
                    cur.right = new_node
                    return

    def preorder(self, root):
        if root == None:
            return
        self.preorder(root.left)
        print(root.val)
        self.preorder(root.right)


    def sum_bst(self, root):
        sum_ = 0

        def helper_preorder(root):
            nonlocal sum_
            if root == None:
                return
            helper_preorder(root.left)
            sum_ += root.val
            helper_preorder(root.right)
            return sum_

        helper_preorder(root)
        print(sum_)


if __name__ == '__main__':
    bst = BST()
    # T = int(input())
    while True:
        # T -= 1
        val = int(input())
        if val == -1:
            break
        bst.insert(val)
    bst.sum_bst(bst.root)