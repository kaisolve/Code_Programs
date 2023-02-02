# max profit in prices
# algorithm we will make for loop and check if the num we in greater than the prev num 
# then add there difference to profit
# return profit
# complixity O(n)

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        profit=0
        for i in range(1,len(profit)):
            if prices[i]>prices[i-1]:
                profit+=prices[i]-prices[i-1]
        return profit