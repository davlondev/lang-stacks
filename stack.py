
# without pop push methods i guess

class Stack():
    def __init__(self):
        self.data = []

    def show(self):
        for i in self.data:
            print(i)

    def push(self, val):
        self.data.append(val)

    def pop(self):
        if len(self.data) <= 0:
            print("cannot pop, empty stack")
            return
        v = self.data[len(self.data)-1]
        self.data = self.data[:-1]
        return v


s = Stack()
s.push("hello")
s.push("world")
s.push("this")
s.push("is")
s.push("a")
s.push("stack")

s.show()

print()
print(s.pop())
print(s.pop())
print(s.pop())
print(s.pop())
#print(s.pop())
#print(s.pop())

print()
s.show()