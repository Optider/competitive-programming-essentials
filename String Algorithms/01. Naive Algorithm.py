# Problem : Prints all occurrences of pat[] in txt[]

    # Input:  txt[] = "THIS IS A TEST TEXT"
    #         pat[] = "TEST"
    # Output: Pattern found at index 10

    # Input:  txt[] =  "AABAACAADAABAABA"
    #         pat[] =  "AABA"
    # Output: Pattern found at index 0
    #         Pattern found at index 9
    #         Pattern found at index 12

# Concept : https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/

def naive_search(txt, pat):
    
    for i in range(0, len(txt)-len(pat)+1) :
        
        
        for j in range(0, len(pat)) :
            if txt[i+j] != pat[j] :
                break
        else :
            # Pattern found
            print('Pattern found at index ', i)

        
        pass

if __name__ == "__main__":

    txt = "THIS IS A TEST TEXT"
    pat = "TEST"
    naive_search(txt, pat)
    print()


    txt =  "AABAACAADAABAABA"
    pat =  "AABA"
    naive_search(txt, pat)