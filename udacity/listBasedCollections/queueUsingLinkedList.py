class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None

    def addEnd(self,node):
        if not self.head:
            self.head=node
            self.tail=node
        else:
            self.tail.next=node
            self.tail=self.tail.next

    def delFirst(self):
        if not self.head:
            return -1
        cur=self.head
        self.head=self.head.next
        return cur.data

class Queue:
    def __init__(self):
        self.linkedList=LinkedList()

    def enQueue(self,data):
        self.linkedList.addEnd(Node(data))

    def deQueue(self):
        return self.linkedList.delFirst()

    def peekNode(self):
        if not self.linkedList.head:
            return -1
        return self.linkedList.head.data


queue=Queue()

queue.enQueue(5)
queue.enQueue(10)
queue.enQueue(15)
queue.enQueue(20)

print(queue.peekNode())

print(queue.deQueue())
print(queue.deQueue())
print(queue.deQueue())

queue.enQueue(25)
queue.enQueue(30)

print(queue.deQueue())
print(queue.deQueue())

print(queue.peekNode())
