

def singleNumber(A):
  # O(n^2)
  print [x for x in A if A.count(x) == 1]


def singleNumber2(A):
  if not A:
    return 0
  if len(A) == 1:
    return A[0]
  A.sort()
  print A, len(A)
  i = 0
  while (i < len(A) - 1):
    if (A[i] != A[i+1]):
      return A[i]
    i += 2
  # the last one 
  return A[i]
        



lista = [1,2,3,4,1,2,3]
print singleNumber2(lista)



""" list.count(x) count the times of object;
[x for x in ....]; boundary check in array,needs to handle the A[len-1] """
