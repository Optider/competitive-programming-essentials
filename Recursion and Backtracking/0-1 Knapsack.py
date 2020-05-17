# Problem - A thief has a bag of max capacity 'C'. He wants to stole items so as to gain max profit.
# Given : wt[], prices[] of 'N' items. 'C' is capacity of bag
# Output : Max profit

if __name__ == '__main__' :
    wt = [1, 2, 3, 5]
    prices = [40, 20, 30, 100]

    N = 4 # no of items
    C = 7 # capacity of thief's bag

    print(profit(N, C, wt, prices))