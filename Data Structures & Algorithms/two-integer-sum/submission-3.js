class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        for(let x = 0; x < nums.length; x++)
        {
            let end =   target - nums[x]
            let check = nums.indexOf(end)
            if(check >= 0 && x != check)
            {
                return [x,check]
            }
        }
        return false
    }
}
