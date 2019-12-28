class HashTable:
    def __init__(self):
        self.table=[[]]*100000

    def hashFunction(self,string):
        return ((ord(string[0])*100)+ord(string[1]))

    def lookUp(self,string):
        hashValue=self.hashFunction(string)
        if string in self.table[hashValue]:
            return hashValue
        return -1

    def store(self,string):
        hashValue=self.hashFunction(string)
        if self.table[hashValue]==None:
            self.table[hashValue]=string
        else:
            self.table[hashValue].append(string)

hashTable = HashTable()
hashTable.store("AB")
hashTable.store("AB")
hashTable.store("QW")
print(hashTable.lookUp("AB"))
print(hashTable.lookUp("LL"))