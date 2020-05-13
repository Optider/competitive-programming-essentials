
def merge(arr, start, end) :
    cross_invns = 0

    mid = (start + end) // 2
    i = start
    j = mid + 1
    sorted_arr = []

    while i <= mid and j <= end :
        if arr[i] <= arr[j] :
            sorted_arr.append(arr[i])
            i += 1
        else :
            cross_invns += mid-i+1
            sorted_arr.append(arr[j])
            j += 1

    # When any array exhausts, add the rem. elems of other array
    if i <= mid :
        sorted_arr.extend(arr[i:mid+1])
    elif j<= end :
        sorted_arr.extend(arr[j:end+1])
    
    # Update arr with sorted values
    for i in range(len(sorted_arr)) :
        arr[start+i] = sorted_arr[i]
    
    return cross_invns

def inversion_count(arr, start, end) :
    # Base Case
    if start >= end :
        return 0

    # Recursive Case, 3 steps
    # 1. Divide
    mid = (start + end) // 2
    x = inversion_count(arr, start, mid)
    y = inversion_count(arr, mid+1, end)
    z = merge(arr, start, end)
    # print(x,y,z)
    return x+y+z


if __name__ == '__main__' :
    arr = [1,5,2,6,3,0]
    print(inversion_count(arr, 0, len(arr)-1))