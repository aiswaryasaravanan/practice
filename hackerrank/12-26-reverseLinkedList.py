class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def add(self,data):
        if not self.head:
            self.head=Node(data)
        else:
            cur=self.head
            while cur.next:
                cur=cur.next
            cur.next=Node(data)

    def reverse(self):
        pre=None
        cur=self.head
        foll=cur.next

        while cur.next:
            cur.next=pre
            pre=cur
            cur=foll
            foll=cur.next

        cur.next=pre
        self.head=cur
        
    def printList(self):
        cur=self.head
        while cur.next:
            print(cur.data)
            cur=cur.next

        print(cur.data)

linkedList = LinkedList()
linkedList.add(1)
linkedList.add(2)
linkedList.add(3)
linkedList.add(4)
linkedList.add(5)

linkedList.printList()

linkedList.reverse()

linkedList.printList()