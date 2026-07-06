class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        const sortedWord = new Map()
        for(let x of strs)
        {
            let temp1 = x.split("").sort().join("")
            if(sortedWord.has(temp1))
            {
                sortedWord.get(temp1).push(x)
            }else
            {
                sortedWord.set(temp1,[x])
            }
        }
        return Array.from(sortedWord.values())
    }
}
