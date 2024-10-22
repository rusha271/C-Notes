/*
In this problem statement it says that if given an array of n lenght 

Find the max product in array / subarray means 

array : [-8,9,-9,1,3,4,5,6,-8]
sum : 19

-> [1,3,4,5,6]

*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sum = nums[0];

        for(auto&nums:nums){
            sum = sum + nums;
            if(sum>max_sum){
                max_sum = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }

        return sum;
    }
};
