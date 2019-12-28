class Node:
    def __init__(self,data,priority):
        self.data=data
        self.priority=priority
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def addNode(self,node):
        if not self.head:
            self.head=node
        else:
            cur=self.head
            while cur.next:
                cur=cur.next
            cur.next=node

    def getNode(self):
        cur=self.head
        maxPriority=cur.priority
        while cur.next:
            if cur.next.priority > maxPriority:
                maxPriority=cur.next.priority
            cur=cur.next

        cur=self.head
        if cur.priority == maxPriority:
            head=cur.next
        while cur.next.priority != maxPriority :
            cur=cur.next

        print(str(cur.next.data)+" "+str(cur.next.priority))

        if not cur.next:
            cur.next=None
        else :
            cur.next=cur.next.next
        

class PriorityQueue:
    def __init__(self):
        self.linkedList = LinkedList()

    def enQueue(self,data,priority):
        self.linkedList.addNode(Node(data,priority))

    def deQueue(self):
        self.linkedList.getNode()
    
priorityQueue=PriorityQueue()
priorityQueue.enQueue(3,1)
priorityQueue.enQueue(2,2)
priorityQueue.enQueue(5,4)
priorityQueue.enQueue(3,6)
priorityQueue.deQueue()
priorityQueue.deQueue()
priorityQueue.deQueue()