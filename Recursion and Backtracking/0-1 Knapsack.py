# Problem - A thief has a bag of max capacity 'C'. He wants to stole items so as to gain max profit.
# Given : wt[], prices[] of 'N' items. 'C' is capacity of bag
# Output : Max profit
# Logic : if wt[i] > C exclude it. Else if wt[i] <= C then max(incluse, exclude)

def knapsack(N, C, wt, prices) :

    # Base Case
    if N <= 0 or C <= 0 :
        return 0

    # Rec Case
    max_profit = 0
    include, exclude = 0, 0
    
    if wt[N-1] <= C :
        # include curr item(last)
        include = prices[N-1] + knapsack(N-1, C-wt[N-1], wt, prices)
    
    # exclude curr item(last)
    exclude = knapsack(N-1, C, wt, prices)
    
    max_profit = max(include, exclude)
    return max_profit

if __name__ == '__main__' :
    wt = [1, 2, 3, 5]
    prices = [40, 20, 30, 100]

    N = 4 # no of items
    C = 7 # capacity of thief's bag

    print(knapsack(N, C, wt, prices))