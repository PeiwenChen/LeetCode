class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if (not A):
            return 0
        A = list(set(A))
        return len(A)


""" set() is the legant way to remove duplicates in a list in place,
no extra memory needed """

