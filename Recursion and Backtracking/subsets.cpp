#include <bits/stdc++.h>
using namespace std;

void subset_better(string word, string ans="", int index=0) {
    /*
        This uses pure recursion. Logic based on recursion tree.
    */

    // base case
    if(index==word.length()) {
        cout << ans << endl;
        return;
    }

    // recursive case
    // include current letter
    subset_better(word, ans, index+1);
    // exclude current letter
    subset_better(word, ans+word[index], index+1);
}

void subsets_mine_way(string word, int cur_char_pos, vector<string> &ans) {
    /*
        Logic based on PMI
    */
    if(cur_char_pos <= 0) {
        return;
    }

    subsets_mine_way(word, cur_char_pos-1, ans);
    int cur_subsets_count = pow(2,cur_char_pos-1);
    for(int prev_subset_idx {}; prev_subset_idx<cur_subsets_count; prev_subset_idx++) {
        ans[cur_subsets_count+prev_subset_idx] = ans[prev_subset_idx]+word[cur_char_pos-1]; // concatenate cur_char_pos at end of all subsets of word[:cur_char_pos]
        // cur_char_pos-1 => bcoz idx = pos-1
    }       
}

void subset_solve_1(string word) {
    int no_of_subsets = pow(2, word.length());
    vector<string> ans (no_of_subsets, "");
    
    subsets_mine_way(word, word.length(), ans);

    for (size_t i = 0; i < no_of_subsets; i++)
        cout << ans[i] << endl;
}

int main() {
    string word;
    cin >> word;
    subset_better(word);
    // subset_solve_1(word);
    return 0;
}