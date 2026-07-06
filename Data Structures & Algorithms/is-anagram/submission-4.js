class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length != t.length){
            return false
        }

        const final = new Map();

        for(let x of s){
            if(final.has(x))
            {
                let temp2 = final.get(x)
                final.set(x,temp2 + 1)
            }
            else
            {
                final.set(x, 1)
            }
        }

        for(let y of t)
        {
            if(final.has(y)){
                let temp2 = final.get(y)
                if((temp2 - 1) < 0)
                {
                    return false
                }
                final.set(y,temp2-1)
            }
            else{
                return false
            }
        }
        return true


    }

    
    
}
