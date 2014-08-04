

# @param A a list of integers
# @param m an integer, length of A
# @param  B a list of integers
# @param n an integer, length of B
# @return nothing
def merge(A, m, B, n):
  if m == 0 :
    A = B # A or B could be empty 
    return
  if n ==0 :
    return
  i = 0
  j = 0
  while (i < m+n and j < n):
    if (i > len(A) - 1):
      A.insert(i, B[j])
      print "inserting %s to A[%s] " %(B[j], i)
      i += 1
      j += 1
    elif (B[j] < A[i]):
      A.insert(i, B[j])
      print "inserting %s to A[%s]" %(B[j], i)
      j += 1
      i += 1
    else :
      i += 1

  print A

# testcase 1 
listA = [1,4,7,10,12]
listB = [0,6,8,20]

# testcase 2
list3 = [1,2,3,4,5]
list4 = [6,7,8,9]

merge(listA, 5, listB, 4)

