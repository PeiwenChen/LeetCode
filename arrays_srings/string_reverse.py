ass Solution:
    # @param s, a string
    # @return a string
    def reverseWords(self, s):
        if (not s.strip()): # check empty string(strip white spaces)
            return ""
        s_reverse = s.split() 
        s_reverse.reverse() # reverse objects in list in place!
        s_return = ' '.join(word for word in s_reverse)
        return s_return
            


""" comments:
list.reverse() reverses objects in the list in place, the list will be overwritten;
elegant converting a list to sting is " ".join(w for w in list) method """
