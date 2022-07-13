// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index*, or false otherwise.

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.

int n = nums.size();
int maxReach=0;

for(int i=0;i<n;i++){
    //if we reach a index further than we could reach return false
    if(i>maxReach) return false;
    //set max reach
    maxReach = max(i+nums[i],maxReach);
}
//we have reached the end so return true
return true;
