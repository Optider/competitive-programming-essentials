def binary_search(arr, n) :
    start = 0
    end = n-1

    while start <= end:
        mid = (start + end)//2
        
        if key == arr[mid] :
            return mid
        elif arr[mid] < key :
            start = mid + 1
        elif arr[mid] > key :
            end = mid - 1
    return None

if __name__ == "__main__" :
    arr = [1,2,3,4,5,6,10,20]
    key = 4
    print(binary_search(arr, len(arr)))