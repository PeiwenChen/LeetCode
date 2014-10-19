import itertools

A = [1,-1,1,2,-1,2,2,-1]

def perm(l):
    permutations = []  # local list   
    if not l:
        return [[]]
    for e in l:
        tmp = l[:]
        tmp.remove(e) 
        if perm(tmp):
            permutations.extend([[e] + r for r in perm(tmp)])    
        else :
            permutations.extend([e])
    return permutations # return local list

def unique_perm(l):
    permutations = perm(l)
    #exclusive_per = set(perm(A)) # unhashable ....
    listlen = len(permutations)
    permutations.sort()
    exclusive_permutations = [permutations[i] for i in range(listlen) if i == 0 or permutations[i] != permutations[i-1]] 

    print exclusive_permutations

unique_perm(A)
