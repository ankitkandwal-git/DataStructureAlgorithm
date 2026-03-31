def reverse_array(arr):
    start = 0
    end = len(arr)-1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1 

n = int(input("Enter the number of elements in the array: "))
arr = list(map(int, input("Enter the elements of the array: ").split()))
reverse_array(arr)
print("Reversed array:", *arr)