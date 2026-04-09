def balanced_locks(s):
    low = 0
    high = 0
    for c in s:
        if c == '(':  
            low += 1
            high += 1
        elif c == ')':  
            low -= 1
            high -= 1
        elif c == '*':  
            low -= 1  
            high += 1  
        if low < 0:
            low = 0
        if high < 0:
            return False
    return low == 0

n = input("Enter the string of locks: ")
if balanced_locks(n):
    print("The locks are balanced.")
else:    
    print("The locks are not balanced.")
