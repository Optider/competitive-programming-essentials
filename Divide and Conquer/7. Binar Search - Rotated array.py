# https://leetcode.com/problems/search-in-rotated-sorted-array/
# NOTE 1: modified_binary_search() logic passes 183 / 196 test cases. 
# NOTE 2: modified_binary_search2() logic passes ALL test cases.

# Problem : A sorted array is rotated, find index of key in that array.
# Input : New Array, key
# Output : Index of key

def modified_binary_search2(arr, key) :
    ''' Passes ALL cases'''

    start = 0
    end = len(arr) - 1

    while start <= end :
        mid = (start + end) // 2

        if arr[mid] == key :
            return mid
        
        # follow right half if (right is sorted and target is in its range) OR (left is sorted but target not in its range)
        elif arr[mid] < key <= arr[end] or (arr[start] < arr[mid] and not arr[start] <= key < arr[mid]) :
            
            start = mid + 1
        else :
            end = mid - 1
        
    return -1
  
def modified_binary_search(arr, key) :
    ''' Passes most cases BUT not all'''

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

    # arr = [8,9,10,6,7]
    # key = 10
    
    # NOTE : modified_binary_search() fails for below cases BUT modified_binary_search2() passes
    # arr = [4,5,6,7,8,1,2,3]
    # key = 8

    arr = [7,8,9,10,11,3,6]
    key = 11

    arr = [3,1]
    key = 1

    # print(modified_binary_search(arr, key))
    print(modified_binary_search2(arr, key))

main()