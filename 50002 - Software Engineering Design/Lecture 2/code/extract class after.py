class Common:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    
    def do_thing(self):
        do_something(a)
        do_this(b)
        do_other_thing(a+c)

class ClassA:
    def __init__(self, com, ...):
        self.com = com
        ...
        com.do_thing()
    ...
class ClassB:
    def __init__(self, com, ...):
        self.com = com
        ...
        com.do_thing()
    ...
