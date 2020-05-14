# Calc no of ways to climb a ladder of size 'n', using skips of 1,2,...,'k'

def ladder(n, k) :
    if n == 0 :
        return 1
    elif n < 0 :
        return 0
    ans = 0

    # return ladder(n-1) + ladder(n-2) +...+ ladder(n-k)
    for i in range(1, k+1) :
        ans += ladder(n-i, k)

    return ans
    

if __name__ == '__main__' :
    n = 4
    k = 3
    no_of_sols = ladder(n, k)
    print(no_of_sols)