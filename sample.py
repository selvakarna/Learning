
### Class and Objects

class Demo:
    print('Class methode')
    d=50
    def example(self,a,b):
        c=a+b+self.d
        return c
    def time_print(self,a):
        import time
        return time.perf_counter()+a



# obj=Demo()
# ans=obj.example(2,3)
# asn2=obj.time_print(2)
# print("the second function is",asn2)
# print("The results is",ans,Demo.d,)


#### Attributes and Methodes | Public/Protected/Private(Mangling)x|

class attribute:
    def __init__(self):
        self.public="Public example"
        self._protected="Proteted example"
        self.__Private="Private example"


# obj=attribute()
# print(obj.public)
# print(obj._protected)
# print(obj._attribute__Private)

##### Methodes

### Refere https://www.youtube.com/watch?v=tiFDNk5C78I


class attribute:
    def __init__(self):
        self.public="Public example"
        self._protected="Proteted example"
        self.__Private="Private example"

    def __privatemethode(self):
        print("Private method")
    def __Protectedmethod(self):
        print("Protected method")
    def publicmethod(self):
        print("public mehode")
    def method(self):
        self.__privatemethode()
        print("Basic mehtode")

# obj=attribute()
# print("....",obj._attribute__privatemethode())

class image:
    def __init__(self):
        self.public=3
        self._praivate=4
        self.__protected=7
        

