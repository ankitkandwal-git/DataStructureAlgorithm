def balanced_parenthesis(s):
    stack = []
    pairs = {')': '(', '}': '{', ']': '['}
    for i in s:
        if i in ['(', '{', '[']:
            stack.append(i)
        elif i in [')', '}', ']']:
            if not stack or stack[-1] != pairs[i]:
                return False
            stack.pop()
    return len(stack) == 0

string = input("Enter the string: ")
if balanced_parenthesis(string):
    print("The string is balanced.")
else:
    print("The string is not balanced.")