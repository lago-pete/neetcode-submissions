class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        for (let c = 0; c < nums.length; c++) {
            for(let x = c+1; x < nums.length; x++){
                if(target == (nums[c] + nums[x])){
                    return [c,x]
                }
                
            }
        }
    }
}
