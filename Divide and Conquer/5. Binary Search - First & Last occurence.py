# Problem : Find first & last occurence of a no in the array
# Given : Array, key
# Output : Index of first & last occurence

def first(arr, key) :

    start = 0
    end = len(arr)-1
    ans = None # Assumed not present

    while start <= end :
        mid = (start + end) // 2

        if arr[mid] == key :
            ans = mid
            
            # since 1st occur is needed, move towards left
            end = mid - 1
        elif arr[mid] < key :
            start = mid + 1
        elif arr[mid] > key :
            end = mid - 1
    
    return ans

def last(arr, key) :
    start = 0
    end = len(arr) - 1
    ans = None

    while start <= end :
        mid = (start + end) // 2
        if arr[mid] == key :
            ans = mid

            # since last occur is needed, move towards right
            start = mid + 1
        elif arr[mid] < key :
            start = mid + 1
        elif arr[mid] > key :
            end = mid - 1
    
    return ans

if __name__ == "__main__" :
    
    arr = [1,2,4,6,6,6,6,12,18]
    key = 6

    print(first(arr, key))
    print(last(arr, key))