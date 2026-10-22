from typing import List

class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return 0
            
        check = 3    
        
        isRotated = 0
        isReversed = 0
        for i in range(n):
            if nums[i] > nums[(i+1)%n]:
                isRotated += 1
            if nums[i] < nums[(i+1)%n]: 
                isReversed += 1
                
        if isReversed == 1:
            check = 2
        if isRotated == 1:
            check = 1

        if check == 3:
            return -1

        idx = -1
        for i in range(n):
            if nums[i] == 0:
                idx = i
                break
        if check == 1:
            return min(idx, 2 + (n - idx))
            
        return min(idx + 1, n - 1 - idx) + 1