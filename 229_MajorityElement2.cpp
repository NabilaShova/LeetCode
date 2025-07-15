#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
        for(int val:nums){
            if(num1 == val)
                count1++;
            else if(num2 == val)
                count2++;
            else if(count1 == 0){
                num1 = val;
                count1++;
            }
            else if(count2 == 0){
                num2 = val;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> result;
        count1 = 0, count2 = 0;
        for(int val:nums){
            if(num1 == val)
                count1++;
            if(num2 == val)
                count2++;
        }

        if(count1 > n/3)
            result.push_back(num1);
        if(count2 > n/3 && num1 != num2)
            result.push_back(num2);
        
        return result;
    }
};

int main(){
    vector<int> nums = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    Solution s;
    vector<int> ans = s.majorityElement(nums);
    for(int ele:ans){
        cout << ele << " ";
    }
    return 0;
}