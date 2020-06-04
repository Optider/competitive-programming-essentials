# Type : CB Recursion & Backtracking
# Problem : Prints all permutations of given string (in alphabetical order)

    # Input:  abc
    # Output: 
    #         abc
    #         acb
    #         bac
    #         bca
    #         cab
    #         cba
            
    # Input:  eat
    # Output: 
    #         aet
    #         ate
    #         eat
    #         eta
    #         tae
    #         tea
            
# Concept : 
    # https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
    # https://www.geeksforgeeks.org/print-first-n-distinct-permutations-of-string-using-itertools-in-python/?ref=rp
    # PYTHON ITERTOOLS (above link)


def permute_all(word, i) :

    # Base Case
    if i >= len(word) :
        print(''.join(word))
        return

    # Recursive Case

    for j in range(i, len(word)) :
        # swap : transfer word[i] to fixed region
        word[i], word[j] = word[j], word[i]
        permute_all(word, i+1)

        # Backtrack
        word[i], word[j] = word[j], word[i]


    pass
permute_all(list("abc"), 0)