def is_isomorphic(s1,s2):
    m = {}
    if len(s1) != len(s2):
        return False 
    for i in len(s1):
        if s1[i] not in m:
            m[s1[i]] = s2[i]
        elif m[s1[i]] != s2[i]:
            return False 
    return True 

string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
print(is_isomorphic(string1, string2))