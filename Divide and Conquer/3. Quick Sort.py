def partition(arr, start, end) :
    pivot = end
    i = start - 1 # pointer for last elem of smaller segment(initially empty)
    j = start # pointer for elem next to larger segment(initially empty)

    while j < end :
        # if current elem <= pivot elem, then move it to smaller segment
        if arr[j] <= arr[pivot] :
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
            j += 1 # incr current elem pointer
        # else include it in larger segment by expanding larger seg
        else :
            j += 1
    # swap 1st elem of larger seg(arr[i+1]) with pivot elem. This index is partition index !
    i += 1
    arr[i], arr[pivot] = arr[pivot], arr[i]

    return i
    
    
def quick_sort(arr, start, end) :
    # Base Case
    if start >= end :
        return

    # Recursive Case
    pivot = partition(arr, start, end)

    print(pivot, arr, start, end)
    
    quick_sort(arr, start, pivot-1)
    quick_sort(arr, pivot+1, end)

    pass

if __name__ == '__main__' :
    arr = [5,6,2,7,5,3,4]
    # arr = [4,4,8,6,4,3]
    print(arr)
    quick_sort(arr, 0, len(arr)-1)
    print(arr)