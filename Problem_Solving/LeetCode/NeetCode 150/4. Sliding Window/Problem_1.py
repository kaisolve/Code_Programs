# max profit in stock
# giving an arr of profits, you need to buy less, sell high and return max
# algorithm we have 2 algorithms
# first using 2 pointers l,r set l to 0, r to 1
# increasing r at each iteration and l will equal r when prices[r]<prices[l]
# we calc profit and maxprofit, return max
# second just buy setting minimum and maxP, min=the first num, max=0
# then for each num, we min is the min of the last one and current price
# max is the max of last one and price-min
# complexity:
# time: O(n)
# space: O(1)
from typing import List
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l,r=0,1
        maxP=0

        while r<len(prices):
            if prices[l]<prices[r]:
                profit=prices[r]-prices[l]
                maxP=max(maxP,profit)
            else:
                l=r
            r+=1
        return maxP

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minprice=prices[0]
        maxprofit=0
        for price in prices:
            minprice=min(minprice,price)
            maxprofit=max(maxprofit,price-minprice)
        return maxprofit
