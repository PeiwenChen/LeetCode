
A = [1,3,5,6,9, 10, 13, 19]

class Solution:
    # @param A, a list of integers
    # @param target, an integer to be inserted
    # @return integer
    def searchInsert(self, A, target):
        if not A:
            return 0
        return self.search(A, 0, len(A) - 1, target)
        
    
    def search(self, B, low, high, target):
        mid = (low + high) /2
        if (target == B[mid]):
            return mid
        elif (target < B[mid]):# go to left
            if (mid == 0 or (target > B[mid - 1] )):
                return mid
            else:
                return self.search(B, low, mid - 1, target)
        else : # go to right
            if ((mid + 1 > len(B) - 1) or (target < B[mid + 1])):
                return (mid + 1)
            else:
                return self.search(B, mid + 1, high, target)
                


""" comments:
1. need to keep record of index in original list, then have to give low/high idx for range;
2. must check index boundary for list/array"""
