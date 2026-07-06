class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length != t.length)
        {
            return false;
        }
        const mapper = {};

        for(let c of s){
            mapper[c] = (mapper[c] || 0) + 1;
        } 
        for(let c of t){
            if(!mapper[c])
            {
                return false;
            }
            mapper[c]--;
        } 
        return true;

    
    }
    
}
