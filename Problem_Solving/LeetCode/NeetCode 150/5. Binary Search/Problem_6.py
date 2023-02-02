# time based key-value store
# giving input set keys to pairs of values and time, return value based on time
# algorithm we will set hashmap, our set will be append to hashmap
# our get will be binary search as the hashmap is sorted per key
# complexity:
# time: O(log(n))
# space: O(1)

class TimeMap:

    def __init__(self):
        self.store={} # key : list of [val,timestamp]
    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.store:
            self.store[key]=[]
        self.store[key].append([value,timestamp])

    def get(self, key: str, timestamp: int) -> str:
        res=""
        values=self.store.get(key,[])
        
        l,r=0,len(values)-1
        while l<=r:
            m=(l+r)//2
            if values[m][1]<=timestamp:
                res=values[m][0]
                l=m+1
            else:
                r=m-1
        return res

# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)