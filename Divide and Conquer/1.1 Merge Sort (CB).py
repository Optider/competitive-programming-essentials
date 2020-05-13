# PREFER this way(1.1) compared to (1). This is generic way for D&C.

def merge(arr, start, end) :
    mid = (start + end) // 2
    i, j = start, mid+1
    sorted_arr = []

    while i <= mid and j <= end :
        if arr[i] < arr[j] :
            sorted_arr.append(arr[i])
            i += 1
        else :
            sorted_arr.append(arr[j])
            j += 1
        pass

    # When any of arrs exhausts. Add remaining elems of other arr
    if i <= mid :
        sorted_arr.extend(arr[i:mid+1])
    elif j <= end :
        sorted_arr.extend(arr[j:end+1])

    # copy all sorted elements to original array
    for i in range(len(sorted_arr)) :
        arr[i+start] = sorted_arr[i] # start is to be added, bcoz we need to update sorted parts only !

    # print(sorted_arr)
    # print(arr)
    pass

if __name__ == "__main__":
    # arr = [8,6,7,5,2,1]
    # merge_sort(arr, 0, len(arr)-1)
    # print(arr)

    arr_merge = [1,3,5,2,4,6] # 2 sorted arrays, 0 to mid and mid+1 to last_elem
    merge(arr_merge, 0, 5)
    print('Sorted arr_merge', arr_merge)