class node:
    def __init__(self,data,next):
        self.data=data
        self.next=next

class ll:
    
    def __init__(self):
        self.head=None
        self.tail=None
        
    def printll(self):
        if self.head is None:
            print("Linked List is empty")
            return
        ptr=self.head
        strn=""
        while ptr:
            strn+=str(ptr.data)+"->"
            ptr=ptr.next
        strn+="None"
        print(strn)
            
    def inserthead(self,data):
        temp=node(data,self.head)
        self.head=temp
        
    def inserttail(self,data):
        if self.head is None:
            self.head=node(data,None)
            return
        ptr=self.head
        while ptr.next:
            ptr=ptr.next
        ptr.next=node(data,None)
    
    def insert(self,data,index):
        ptr=self.head
        count=index-1
        while count:
            ptr=ptr.next
            count=count-1
        ptr.next=node(data,ptr.next)
     
    def deletehead(self):
        self.head=self.head.next

    def deletetail(self):
        ptr=self.head
        while ptr.next.next:
            ptr=ptr.next
        ptr.next=None

    def delete(self,index):
        ptr=self.head
        count=index-1
        while count:
            ptr=ptr.next
            count-=1
        ptr.next=ptr.next.next
    
    
llt=ll()
llt.inserthead(1)
llt.inserttail(2)
llt.inserttail(3)
llt.inserttail(4)
llt.inserttail(5)
llt.insert(9,4)
llt.printll()
llt.deletehead()
llt.printll()
llt.deletetail()
llt.printll()
llt.delete(3)
llt.printll()
      