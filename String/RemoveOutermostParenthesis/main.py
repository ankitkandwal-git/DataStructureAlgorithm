def remove_outer_parentheses(s):
    result = []
    count = 0
    for char in s:
        if char == '(': 
            if count >0:
                result.append(char)
                count +=1
            else: 
                count -=1 
                result.append(char)
    return ''.join(result) 

# Example usage:
input_string = input("Enter a string of parentheses: ")
result = remove_outer_parentheses(input_string)
print("Result after removing outermost parentheses:", result)