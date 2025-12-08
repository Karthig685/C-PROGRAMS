class Jarv:
    def __init__(self, capacity=12):
        if not isinstance(capacity, int) or capacity < 0:
            raise ValueError("Capacity must be greater than 0 and Integer")
        self._capacity=capacity
        self._size=0

    def __str__(self):
        return "🍪" * self._capacity

    def deposit(self, n):
        if self._size+n > self._capacity:
            raise ValueError("Jar is almost full... Can't Add")
        self._size+=n

    def withdraw(self,n):
        if n > self._size:
            raise ValueError("Less cookies in the Jar")
        self._size-=n

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return self._size

if __name__ == "__main__":
    j=Jarv(10)
    print(j)
    j.deposit(9)
    print(j)
    j.withdraw(5)
    print(j)
