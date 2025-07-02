#include <bits/stdc++.h>
using namespace std;

class Solution { 
    public: 
        void moveZeroes(vector<int>& nums) { 
            int count = 0;

            for(int i=0; i<nums.size(); i++){
                if(nums[i] != 0){
                    swap(nums[i], nums[count]);
                    count++;
                }
            }
        }
};

int main(){ 
    int n; 
    cin >> n; 
    vector<int> nums(n); 
    for(int i=0; i<n; i++){ 
        cin >> nums[i]; 
    }

    Solution s;
    s.moveZeroes(nums);

    for(int val:nums){
        cout << val << " ";
    }

    cout << endl;
    return 0;
}