# Problem : A sorted array is rotated, find index of key in that array.
# Input : New Array, key
# Output : Index of key

def modified_binary_search(arr, key) :

    start = 0
    end = len(arr) - 1

    while start <= end :
        mid = (start + end) // 2

        if arr[mid] == key :
            return mid
        elif arr[mid] < key :
            # key should have been in RHS
            # BUT might be in LHS due to rotation !!!
            if arr[end] < key :
                # key is in LHS
                end = mid - 1
            else :
                # key is in RHS
                start = mid + 1
        elif arr[mid] > key :
            # key should have been in LHS
            # BUT might be in RHS due to rotation !!!
            if arr[start] > key :
                # key is in RHS
                start = mid + 1
            else :
                # key is in LHS
                end = mid - 1
    # not found
    return -1


def main() :
    arr = [4,5,1,2,3]
    key = 5

    print(modified_binary_search(arr, key))
main()