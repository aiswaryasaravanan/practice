class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

class BinarySearchTree:
    def __init__(self,root=None):
        self.root=root

    def addNode(self,data,root):
        if not self.root:
            self.root = Node(data)
        else:
            if data < root.data :
                if not root.left :
                    root.left = Node(data)
                else :
                    self.addNode(data,root.left)
            else :
                if not root.right :
                    root.right = Node(data)
                else :
                    self.addNode(data,root.right)

    def inOrder(self,root):
        if root:
            self.inOrder(root.left)
            print(root.data,end=" ")
            self.inOrder(root.right)
    
    def postOrder(self,root):
        if root:
            self.inOrder(root.left)
            self.inOrder(root.right)
            print(root.data,end=" ")

    def preOrder(self,root):
        if root:
            print(root.data,end=" ")
            self.preOrder(root.left)
            self.preOrder(root.right)

tree = BinarySearchTree()
tree.addNode(5,tree.root)
tree.addNode(3,tree.root)
tree.addNode(2,tree.root)
tree.addNode(4,tree.root)
tree.addNode(7,tree.root)
tree.addNode(6,tree.root)
tree.addNode(8,tree.root)

tree.inOrder(tree.root)
print()
tree.preOrder(tree.root)
print()
tree.postOrder(tree.root)