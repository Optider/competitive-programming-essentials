
def merge(arr, start, end) :
    cross_invns = 0
    # write merge
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

    return x+y+z


if __name__ == '__main__' :
    arr = [1,5,2,6,3,0]
    print(inversion_count(arr, 0, len(arr)-1))