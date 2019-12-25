class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class linkedList:
    def __init__(self,head=None):
        self.head=head

    def appendNode(self,node):
        if not self.head:
            self.head=node
        else:
            cur=self.head
            while cur.next:
                cur=cur.next
            cur.next=node

    def countLength(self):
        cur=self.head
        count=1
        while cur.next:
            cur=cur.next
            count+=1
        return count

    def findPosition(self,data):
        cur=self.head
        pos=1
        while cur and cur.data!=data :
            cur=cur.next
            pos+=1
        if not cur:
            return -1
        if cur.data==data:
            return pos

a=Node(5)

l1=linkedList(a)

l1.appendNode(Node(10))
l1.appendNode(Node(15))

print(l1.countLength())

print(l1.findPosition(10))
print(l1.findPosition(20))
print(l1.findPosition(5))
print(l1.findPosition(15))
