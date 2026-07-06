class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    
    hasDuplicate(nums) {
        const check = new Set();

        for (let i of nums){
            if(check.has(i)){
                return true
            }
            check.add(i)
        }
        return false

    }
}
