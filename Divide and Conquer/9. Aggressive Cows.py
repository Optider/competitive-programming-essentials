# Type : CB Divide & Conquer
# link : https://www.spoj.com/problems/AGGRCOW/
# Input :
    # 1
    # 5 3
    # 1
    # 2
    # 8
    # 4
    # 9

# Output :
    # 3
# import sys
# sys.stdin = open('./input.txt', 'r') 
# sys.stdout = open('output.txt', 'w')

def can_place(C, stalls, min_sep) :
    prev_cow_stall = stalls[0] # prev stall at which cow was placed

    for i in stalls[1:] :
        
        if i-prev_cow_stall >= min_sep :
            C -= 1
            prev_cow_stall = i

        if C == 1 : # bcoz 1st cow is already at 1st stall
            return True

    return False

def aggcow(C, stalls, left, right) :
    
    if len(stalls) == 2 :
        print(right-left)
        return
    ans = 0
    while left <= right :
        mid = (left + right)//2
        # print(C, left, right, mid)
        if can_place(C, stalls, mid) :
            ans = mid
            left = mid + 1
            # print(ans)
        else :
            right = mid - 1
    print(ans)
    pass

if __name__ == "__main__":
    T = int(input())
    while T :
        T -= 1
        stalls = []
        N, C = map(int, input().split())
        for _ in range(N) :
            stalls.append(int(input()))
        stalls.sort()

        aggcow(C, stalls, stalls[0], stalls[-1])