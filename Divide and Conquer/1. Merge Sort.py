def merge(left, right) :
    arr = []

    i, j = 0, 0

    while i < len(left) and j < len(right) :
        
        if left[i] < right[j] :
            arr.append(left[i])
            i += 1
        else :
            arr.append(right[j])
            j += 1
    
    # when any of left/right exhausts add rest elements directly
    if i < len(left) :
        arr.extend(left[i:])
    elif j < len(right) :
        arr.extend(right[j:])
    
    return arr