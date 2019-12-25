class Node:

    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:

    def __init__(self):
        self.head=None

    def addFirst(self,node):
        if not self.head:
            self.head=node
        else:
            cur=self.head
            self.head=node
            self.head.next=cur

    def delFirst(self):
        if not self.head:
            return -1
        cur=self.head
        self.head=self.head.next
        return cur.data


class Stack:
    def __init__(self):
        self.linkedList=LinkedList()
    def pushNode(a,data):
        a.linkedList.addFirst(Node(data))
    def popNode(self):
        return self.linkedList.delFirst()

stack=Stack()
stack.pushNode(5)
stack.pushNode(10)
stack.pushNode(15)
stack.pushNode(20)

print(stack.popNode())
print(stack.popNode())
print(stack.popNode())
print(stack.popNode())
print(stack.popNode())