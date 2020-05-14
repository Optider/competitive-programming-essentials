def quick_sort(arr, start, end) :
    # Base Case
    if start >= end :
        return

    # Recursive Case
    pivot = partition(arr, start, end)

    quick_sort(arr, start, pivot)
    quick_sort(arr, pivot+1, end)

    pass

if __name__ == '__main__' :
    arr = [5,6,2,7,3,4]
    quick_sort(arr, 0, len(arr)-1)
    print(arr)