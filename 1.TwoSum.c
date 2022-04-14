/*
    ! LeetCode : 1. Two Sum 
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
/*
    * Note: The returned array must be malloced, assume caller calls free().
*/

int * twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *returnNums = (int*) malloc(2*sizeof(int));
    for (int i = 0; i < numsSize - 1; i++){
        for (int j = numsSize - 1; j > i; j--){
            if (nums[j] + nums[j - 1] == target){
                returnNums[0] = j;
                returnNums[1] = j - 1; 
            }
        }
    }
    return returnNums;        
}
