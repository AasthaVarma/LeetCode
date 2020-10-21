class Solution {
public:
    unordered_map<int, int> um;
    int climbStairs(int n) {
        if(um.find(n) != um.end())
            return um[n];
        
        int res;
        if(n<=2)
            res = n;
        else
            res = climbStairs(n-1) + climbStairs(n-2);
        um[n] = res;
        
        return res;
    }
};
