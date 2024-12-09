arr = [7, 6, 19, 3, 5, 4]

def quick(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[0]
    left = [x for x in arr[1:] if x <= pivot]
    right = [x for x in arr[1:] if x > pivot]
    
    return quick(left) + [pivot] + quick(right)
    

print(quick(arr))
