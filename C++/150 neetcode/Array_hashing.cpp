// Solve the problem statement of Group of anagrams : 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️ 


// Code 1 : Find the duplicate value in array

//🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻

/*

#include <bits/stdc++.h>
using namespace std;

bool is_duplicate_hash(int array[], int n) {
    unordered_set<int> seen; 
    for (int i = 0; i < n; i++) {
        if (seen.find(array[i]) != seen.end()) {
            return true;
        }
        seen.insert(array[i]);
    }
    return false; 
}

int main() {
    int no_in = 0;
    cout << "Enter the size of array: ";
    cin >> no_in;
    
    int array[no_in];
    cout << "Enter the array elements: ";
    for (int i = 0; i < no_in; i++) {
        cin >> array[i];
    }
    
    
    cout << (is_duplicate_hash(array, no_in) ? "There are duplicate values" : "No duplicate values") << endl;
    
    return 0;
}



#include <bits/c++.h>
using namespace std;

int main(){
    int no_in , value_in_set;
    cout<<"Enter a array : "<<endl;
    cin>>no_in;

    unordered_set<int> myset;

    for(int i = 0 ; i < no_in ; i++){
        cin<<value;
        myset.insert(value);
    }

    if(myset.size() == no_in){
        cout<<"True";
    }
    else{
        cout<<"False"
    }

    return 0;
}


*/










// Code 2 :  anagram problem : in this the string should be same in both if s and t are same characheter then

// @@@ 🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻


/*

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    unordered_map<char, int> s_count;
    unordered_map<char, int> t_count;

    for (int i = 0; i < s.size(); i++) {
        s_count[s[i]]++;
        t_count[t[i]]++;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s_count != t_count) {
            return false;
        }
    }
    return true;
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    cout << (isAnagram(s, t) ? "The strings are anagrams" : "The strings are not anagrams") << endl;

    return 0;
}


*/




// Code 3 :  Two sum problem -> find two numbers that sum up the target value 

// @@@ 🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻


/*

here the logic is used as get the complemnint value from target - num[i]
and that complemnt value should find in the map 



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; 

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target number: ";
    cin >> target;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "The two numbers that add up to the target are at indices: " 
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;
}


*/



// @@@ 🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻
//Code5 : Top K Elements in List -> Given an integer array nums and an integer k, return the k most frequent elements within the array 

/*

#include <bits/stdc++.h>
using namespace std;

vector<int> top_k_elements_sorted(vector<int>& nums, int k) {

    // in this it counts the frequency of number 
    // here num(value) is frequency that add in map and nums(key) is no. in vector 
    unordered_map<int, int> count;
    for (int num : nums) {
        count[num] = 1 + count[num];
    }
    

    // this one check the second value is greater or equal then k it will prinited in result  
    vector<int> result;
    for (const auto& entry : count) {
        if (entry.second >= k) {
            result.push_back(entry.first);
        }
    }

    // if we use sort this then the time complexity will be (nlogn)
    //sort(result.begin(), result.end());

    return result;
}


int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout<<"Enter a  number that how much frequency occur";
    cin>>k;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    top_k_elements(nums , n , k);

    

    return 0;
}

*/





// @@@ 🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻🧑‍💻
// Code 6 : This is encode and decode of string using ascii value 



/*




*/


/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            result = result + to_string(str.size()) + "#" + str;
        }
        
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            // stoi function that changes to string to integer 
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        
        return result;
    }
};


int main() {
    Solution solution;
    vector<string> original = {"hello", "world", "test"};
    
    // Encode
    string encoded = solution.encode(original);
    cout << "Encoded: " << encoded << endl;
    
    // Decode
    vector<string> decoded = solution.decode(encoded);
    cout << "Decoded: ";
    for (const string& str : decoded) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}

*/


// Code 7 : Product of array except itself but dont use divison  

/*

Let's explain the code in a step-by-step format similar to what you provided:

Step 1: Size of Vector/Array is Taken
- The first step is to determine the size of the input vector/array `nums`.
- **Example:** If `nums = {1, 2, 3, 4}`, then the size `n = 4`.

Step 2: **Result Array Initialization**
- A result array is created with the same size as `nums`, and all elements are initialized to 1.
- **Example:** The result array starts as `{1, 1, 1, 1}`.

Step 3: **Left Product Calculation**
- A variable `leftProduct` is initialized to 1. This variable will hold the product of all elements to the left of the current index.
- We iterate through the `nums` array from left to right.

    **a.** At index `0`, the current value of `leftProduct` is `1`. 
        - We set `result[0] = 1` (no change here since `leftProduct` is 1).
        - **Next:** Update `leftProduct = leftProduct * nums[0]` which is `1 * 1 = 1`.
        - **Result:** `{1, 1, 1, 1}`.
  
    **b.** At index `1`, `leftProduct` is `1`.
        - We set `result[1] = leftProduct` which is `1`.
        - **Next:** Update `leftProduct = leftProduct * nums[1]` which is `1 * 2 = 2`.
        - **Result:** `{1, 1, 1, 1}`.

    **c.** At index `2`, `leftProduct` is `2`.
        - We set `result[2] = leftProduct` which is `2`.
        - **Next:** Update `leftProduct = leftProduct * nums[2]` which is `2 * 3 = 6`.
        - **Result:** `{1, 1, 2, 1}`.

    **d.** At index `3`, `leftProduct` is `6`.
        - We set `result[3] = leftProduct` which is `6`.
        - **Next:** Update `leftProduct = leftProduct * nums[3]` which is `6 * 4 = 24`.
        - **Result:** `{1, 1, 2, 6}`.

Step 4: **Right Product Calculation and Multiplication**
- A variable `rightProduct` is initialized to 1. This variable will hold the product of all elements to the right of the current index.
- We iterate through the `nums` array from right to left.

    **a.** At index `3`, `rightProduct` is `1`.
        - We multiply `result[3] *= rightProduct` which is `6 * 1 = 6`.
        - **Next:** Update `rightProduct = rightProduct * nums[3]` which is `1 * 4 = 4`.
        - **Result:** `{1, 1, 2, 6}`.

    **b.** At index `2`, `rightProduct` is `4`.
        - We multiply `result[2] *= rightProduct` which is `2 * 4 = 8`.
        - **Next:** Update `rightProduct = rightProduct * nums[2]` which is `4 * 3 = 12`.
        - **Result:** `{1, 1, 8, 6}`.

    **c.** At index `1`, `rightProduct` is `12`.
        - We multiply `result[1] *= rightProduct` which is `1 * 12 = 12`.
        - **Next:** Update `rightProduct = rightProduct * nums[1]` which is `12 * 2 = 24`.
        - **Result:** `{1, 12, 8, 6}`.

    **d.** At index `0`, `rightProduct` is `24`.
        - We multiply `result[0] *= rightProduct` which is `1 * 24 = 24`.
        - **Next:** Update `rightProduct = rightProduct * nums[0]` which is `24 * 1 = 24`.
        - **Result:** `{24, 12, 8, 6}`.

Final Result:
- The final result array is `{24, 12, 8, 6}`, where each element is the product of all elements in the original array except the one at the corresponding index.

*/



/*


#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Calculate left products
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] = leftProduct;
            leftProduct *= nums[i];
        }

        // Calculate right products and multiply with the current result
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return result;
    }
};

*/



// Valid Sudoku : 

/*

Sudoku 

0 1 2 3 4 5 6 7 8
0
1
2
3
4
5
6
7
8               

This is 9 by 9 grid of sudoku but from 0-2 it is consdier 0 , 3-5 consider as 1 and 6-8 consider as 2
 
so finaly the grid will be 
        [0,1,2]
        [0,1,2]
        [0,1,2]



We use hash set 
    key(r/3,c/3)
    value -> set from that grid




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> squares;  // key = (r / 3) * 3 + c / 3

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                // here it is define becoz the every cell has diffrent value so 
                char cell = board[r][c];
                if (cell == '.') {
                    continue;
                }
                if (rows[r].count(cell) || cols[c].count(cell) || squares[(r / 3) * 3 + c / 3].count(cell)) {
                    return false;
                }
                cols[c].insert(cell);
                rows[r].insert(cell);
                squares[(r / 3) * 3 + c / 3].insert(cell);
            }
        }
        return true;
    }
};
*/

