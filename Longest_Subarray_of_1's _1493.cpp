/* 
Leetcode difficulty ->  Medium

Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
Example 1:

Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
Example 2:

Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
Example 3:

Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.
*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros=0, left=0;
        int ans =0;
        //Iterate over all the elements from the beginning to the end of the vector
     for(int right=0; right < nums.size(); right++){
        //counts number of zeros
          if(nums[right]== 0){
             zeros++;
          }
          //Decreases size of sliding window
          if(zeros > 1){
            if(nums[left]= 0){
                zeros--; 
            }
            //increments left if number of zeros are less than one
            left++;
          }
          // Compares the ans with the difference of the right and left
       //ans = 0  right -left = 0 -0
          ans = max(ans , right-left);
     }
       //Retunr the count of all consecutive ones found in the vector
      return ans;
    }
      
   
};
