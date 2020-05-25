# Problem : Find square root of N
# Input : N
# Output : sqrt(N)

def find_root(N) :

    start = 1
    end = N
    ans = -1
    while start <= end :
        mid = (start+end) // 2

        if mid*mid == N :
            ans = mid
            return ans
        elif mid*mid < N :
            ans = mid
            start = mid + 1
        elif mid*mid > N :
            end = mid - 1

    return ans

if __name__ == "__main__" :
    N = 9
    print(find_root(N))
    print(find_root(10))
    print(find_root(0))
    print(find_root(1))
    print(find_root(2))