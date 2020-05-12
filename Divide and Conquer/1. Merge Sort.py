def merge(left, right) :
    arr = []

    i, j = 0, 0

    while i < len(left) and j < len(right) :
        
        if left[i] < right[j] :
            arr.append(left[i])
            i += 1
        else :
            arr.append(right[j])
            j += 1
    
    # when any of left/right exhausts add rest elements directly
    if i < len(left) :
        arr.extend(left[i:])
    elif j < len(right) :
        arr.extend(right[j:])
    
    return arr

def merge_sort(arr) :
    if len(arr) <= 1 :
        return arr

    mid = len(arr)//2
    
    left = merge_sort(arr[: mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)

if __name__ == "__main__" :
    arr = [2,1,4,3,6,8]
    print(merge_sort(arr))