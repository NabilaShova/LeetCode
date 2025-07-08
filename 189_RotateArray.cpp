#include <bits/stdc++.h>
using namespace std;

//Rotate Left
// class Solution {
//   public:

//     // Function to rotate an array by d elements in counter-clockwise direction.
//     void rotateArr(vector<int>& arr, int d) {
//         int n = arr.size();
//         d %= n;
        
//         reverse(arr.begin(), arr.begin()+d);
//         reverse(arr.begin()+d, arr.end());
//         reverse(arr.begin(), arr.end());
//     }
// };

//Rotate Right
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;

        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.begin(), nums.end());
    }
};

int main(){ 
    int n; 
    cin >> n; 
    vector<int> nums(n); 
    for(int i=0; i<n; i++){ 
        cin >> nums[i]; 
    }
    int k;
    cin >> k;

    Solution s;
    s.rotate(nums, k);

    for(int val:nums){
        cout << val << " ";
    }

    cout << endl;
    return 0;
}

