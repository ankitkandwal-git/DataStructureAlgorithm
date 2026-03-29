def assign_cookies(greed,cookies):
    greed.sort();
    cookies.sort();
    i = 0;
    j = 0;
    while i<len(greed) and j<len(cookies):
        if cookies[j] >= greed[i]:
            i += 1
            j +=1
        else:
            j+=1 
            
    return i 

m = int(input("Enter the number of children: "))
n = int(input("Enter the number of cookies: "))
greed = list(map(int, input("Enter the greed factors of the children: ").split()))
cookies = list(map(int, input("Enter the sizes of the cookies: ").split()))
result = assign_cookies(greed, cookies)
print("The maximum number of content children is:", result)