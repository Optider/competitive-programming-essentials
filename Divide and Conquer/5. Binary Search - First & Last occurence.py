# Problem : Find first & last occurence of a no in the array
# Given : Array, key
# Output : Index of first & last occurence

if __name__ == "__main__" :
    arr = [1,2,3,4,6,6,6,6,12,18]
    key = 6
    
    print(first(arr, key))
    print(last(arr, key))